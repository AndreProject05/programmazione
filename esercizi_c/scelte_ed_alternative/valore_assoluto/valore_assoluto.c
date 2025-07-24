#include <stdio.h>
#include <stdlib.h>

void inserisci_numero(int* numero){
    scanf("%d", numero);
}

int valore_assoluto_fu(int numero){
    return abs(numero);
}

int main(){

    int numero = 0;
    printf("inserisci un numero: ");
    inserisci_numero(&numero);
    int valore_assoluto = valore_assoluto_fu(numero);
    printf("\nil valore assoluto di %d e' %d", numero, valore_assoluto);


}