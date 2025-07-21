#include <stdio.h>
#include <stdlib.h>

// legge due numeri reali
void leggi_numeri_reali(float* n1, float* n2){
    if (scanf("%f", n1) != 1) {
        printf("numero 1 non è un numero reale\n");
        exit(1);
    }

    if (scanf("%f", n2) != 1 || *n2 == 0) {
        printf("numero 2 non è un reale oppure hai dato valore = 0 a numero 2\n");
        exit(1);
    }
}

float addizione(float n1, float n2) {
    return n1 + n2;
}

float sottrazione(float n1, float n2) {
    return n1 - n2;
}

float moltiplicazione(float n1, float n2) {
    return n1 * n2;
}

float divisione(float n1, float n2) {
    return n1 / n2;
}

int main() {
    float a = 0, b = 0;

    printf("Inserisci 2 numeri reali:\n");
    leggi_numeri_reali(&a, &b);

    float risultato_add = addizione(a, b);
    float risultato_sot = sottrazione(a, b);
    float risultato_mul = moltiplicazione(a, b);
    float risultato_div = divisione(a, b);

    printf("Addizione: %.2f\n", risultato_add);
    printf("Sottrazione: %.2f\n", risultato_sot);
    printf("Moltiplicazione: %.2f\n", risultato_mul);
    printf("Divisione: %.2f\n", risultato_div);

    return 0;
}
