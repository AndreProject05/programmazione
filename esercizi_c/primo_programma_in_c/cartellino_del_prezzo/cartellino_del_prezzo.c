#include <stdio.h>

void inserisci_oggetto(double* oggetto, int* percentuale){
    printf("\nprezzo: ");
    if (scanf("%lf", oggetto) != 1) {
          printf("hai inserto un dato non valido");
    }
    printf("sconto: ");
    if (scanf("%d", percentuale) != 1){
        printf("hai inserto un dato non valido");
    }
}

double calcolo_cartellino(double numero, int percentuale){
    double prezzo_finale = numero * (1 -(double)percentuale / 100);
    return prezzo_finale;
}

int main(){

    double numero = 0;
    int sconto = 0;

    printf("\ninserisci i dati: ");
    inserisci_oggetto(&numero, &sconto);
    printf("\n");
    printf("\nCartellino: ");
    printf("\nnumero: %lf", numero);
    printf("\nsconto applicato: %d ", sconto);
    double prezzo_finale = calcolo_cartellino(numero, sconto);
    printf("\nil prezzo finale del cartellino e di %lf", prezzo_finale);
}