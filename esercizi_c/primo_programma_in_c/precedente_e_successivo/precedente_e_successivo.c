// libreria standard di input, output
#include <stdio.h>

// questa libreria contiene una serie di funzioni standard utili
#include <stdlib.h>

// questa libreria contiene funzioni per lavorare con testi e array di caratteri (manipolare le stringhe)
#include <string.h>

// libreria che mi permette di usare true e false per comporre condizioni booleane
#include <stdbool.h>

// questa libreria contiene le costanti che definiscono i limiti dei tipi di dati numerici
#include <limits.h>

//libreria ce gestisce il bufferoverflow e gli underoverflow
#include <errno.h>

// problema -> Si scriva un programma in C che legga un valore intero
// e visualizzi il valore intero precedente e successivo

// funzione che restituisce un bool (true or false), il primo parametro è un puntatore a
// una stringa (array di caratteri), è costante perché la funzione può leggere la stringa ma non può modificarla
// il secondo parametro è un puntatore a intero che serve per scrivere il numero convertito se la stringa è valida
// in parole semplici questa funzione riceve del testo (input) e controlla se rappresenta un numero intero. Se
// è valido restituisce true e scrive il numero in *output. Se non è valido restituisce false 
bool is_valid_integer(const char *input, int *output) {

    // andiamo a dichiarare puntatore di tipo char che conterrà il primo carattere lettera dell'input dell'utente
    // assegnamo a val il valore della funzione che restituisce strtol -> string to long.
    // Questa funzione prende la stringa in input, controlla se il numero non contiene caratteri, se li contiene salva il primo carattere nel puntatore
    // il 10 alla fine serve per dire la base con cui stiamo lavorando, in questo caso siamo in base decimale
    char *endptr;
    errno = 0;
    long val = strtol(input, &endptr, 10);

     if (errno == ERANGE) return false;  // controlla overflow/underflow

    // questo controllo dice: se l'utente ha scritto caratteri non validi nell'input oppure ha premuto 
    // invio e basta, ritorno false
    if (*endptr != '\0' || input[0] == '\0')
        return false;

    // con questo controllo voglio vedere se il mio numero long è adatto per la conversione a intero
    // per far ciò ci serviamo delle costanti messe a disposizione dalla libreria limits.h
    if (val > INT_MAX || val < INT_MIN)
        return false;

    // ora che so che il numero è valido, lo assegno a *output così che io possa utilizzarlo nel main
    *output = (int)val;
    return true;
}

// definiamo una funzione che ha lo scopo di rimuovere il carattere '\n' da una stringa letta con fgets()
// l'utente quando immette un input, quando preme invio, genererà sempre un '\n'
void remove_newline(char *str) {
    str[strcspn(str, "\n")] = '\0';
}

// inizia il programma
int main() {

    // dichiariamo un array di caratteri che andrà a contenere l'input dell'utente
    char input[100];

    // dichiariamo number di tipo intero per salvare il numero intero che l’utente inserisce, dopo averlo validato
    int number;

    // andiamo a scrivere il ciclo while, gli diciamo: vai avanti finché la condizione è vera
    while (1) {

        // chiediamo all'utente di scrivere un numero intero e validiamo l'input
        printf("Inserisci un numero intero: ");

        // se l'input è valido la condizione diventa false e non entra nell'if, altrimenti esegue l'if
        if (!fgets(input, sizeof(input), stdin)) {

            // dico all'utente che c'è stato un errore durante la lettura dell'input
            printf("Errore durante la lettura dell'input.\n");

            // il programma è terminato con un errore
            return 1;
        }

        // passiamo alla funzione void remove_newline() l'input così da rimuovere il '\n'
        remove_newline(input);

        // questa riga chiama una funzione personalizzata chiamata is_valid_integer, e ne controlla il risultato (vero o falso)
        if (is_valid_integer(input, &number)) {

            // controlliamo se il numero è uguale al massimo o al minimo intero rappresentabile
            if (number == INT_MAX || number == INT_MIN) {

                // se è al limite, avvisiamo l'utente che fare -1 o +1 potrebbe causare errore
                printf("Numero ai limiti! Operazione non sicura.\n");
            } else {

                // se tutto è valido, stampiamo il numero precedente e successivo
                printf("Il numero precedente di %d è %d, mentre il successivo è %d.\n", number, number - 1, number + 1);
            }

            // se l’input era valido, usciamo dal ciclo while con break
            break;

        } else {
            // se il numero non è valido, stampiamo messaggio d’errore e ripetiamo il ciclo
            printf("Input non valido. Inserisci un numero intero valido.\n");
        }
    }

    // fine del programma
    return 0;
}
