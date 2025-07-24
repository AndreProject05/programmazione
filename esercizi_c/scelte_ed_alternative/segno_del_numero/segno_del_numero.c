#include <stdio.h>
#include <stdlib.h>

void inserisci_numero(int* numero){
    scanf("%d", numero);
}

void positivo_negativo(int numero){
    if(numero >= 0){
        printf("%d e' positivo", numero);
    }
    else
    printf("%d e' negativo", numero);
    exit(1);
}

int main(){

    int numero = 0;

    printf("inserisci un numero: ");
    inserisci_numero(&numero);
    positivo_negativo(numero);

}