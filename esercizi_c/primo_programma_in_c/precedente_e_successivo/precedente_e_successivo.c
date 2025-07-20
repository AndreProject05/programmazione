#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    // problema -> Si scriva un programma in C che legga un valore intero
    // e visualizzi il valore intero precedente e successivo

    char input[100];
    int n1;
    int is_integer = 0;

    do {
        printf("Inserisci un numero intero: ");
        fgets(input, sizeof(input), stdin);

        // Rimuove il newline se presente
        input[strcspn(input, "\n")] = '\0';

        // Verifica se è un intero e non contiene altro
        if (sscanf(input, "%d", &n1) == 1 && strspn(input, "-0123456789") == strlen(input)) {
            printf("Il numero precedente di %d è %d, mentre il successivo è %d.\n", n1, n1 - 1, n1 + 1);
            is_integer = 1;
        } else {
            printf("Devi inserire un numero intero valido! Es: 5, -2, 7 ...\n");
        }

    } while (!is_integer);

    return 0;
}
