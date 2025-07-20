#include <stdio.h>

int main(){

    //problema -> si scriva un programma in C che legga due valori
    //e visualizzi la loro somma 

    //pseudocodice -> 
    // 1. inizializzo variabili di input
    // 2. chiedo di inserire input
    // 3. inizializzo variabile di output
    // 4. stampo risultato 

    printf("benvenuti nel programma che stampa la somma tra due numeri!\n");
    //inizializzazione delle variabili di input
    int n1 = 0;
    int n2 = 0;

    //chiedo di inserire input
    printf("inserisci un numero intero: ");
    scanf("%d", &n1);
    printf("inserisci un numero intero: ");
    scanf("%d", &n2);
    
    //inizializzo variabile di output
    int somma = n1 + n2;

    //stampo risultato 
    printf("la somma tra %d e %d e: %d",n1,n2,somma);

    //è andato tutto bene 
    return 0;

}