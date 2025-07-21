#include <stdio.h>
#include <stdlib.h>

// Legge due interi da input e li restituisce tramite puntatori
void leggi_due_numeri_interi(const char* messaggio1, const char* messaggio2 , int* num1, int* num2) {
    printf("%s", messaggio1);
    scanf("%d", num1);
    printf("%s", messaggio2);
    scanf("%d", num2);
}

void controlla_numeri(int* num1, int* num2){

    if (*num1 == 0 || *num2 == 0){
        printf("il numero non è valido");
        exit(1);
    }
}

// Calcola la media di due interi
int calcola_media(int a, int b) {
    return (a + b) / 2;
}

int main() {
    int numero1, numero2;
    const char* messaggio1 = "Inserisci un numero intero:\n "; 
    const char* messaggio2 = "Inserisci un numero intero:\n ";
    leggi_due_numeri_interi(messaggio1, messaggio2, &numero1, &numero2);
    controlla_numeri(&numero1, &numero2);    
    int media = calcola_media(numero1, numero2);
    printf("La media è: %d\n", media); 
    return 0;
}