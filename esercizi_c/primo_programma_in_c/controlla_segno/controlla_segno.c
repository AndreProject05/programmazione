#include <stdio.h>

void inserisci_numero(int* numero){
    scanf("%d", numero);
}

void positivo(int numero){
    if(numero > 0)
    printf("****");
}

void negativo(int numero){
    if(numero < 0)
    printf("$$$$");
}

void numero_uguale_0(int numero){
    if(numero == 0)
    printf("****\n$$$$");
}

int main(){

int numero = 0;
printf("inserisci un numero: ");
inserisci_numero(&numero);
positivo(numero);
negativo(numero);
numero_uguale_0(numero);


}