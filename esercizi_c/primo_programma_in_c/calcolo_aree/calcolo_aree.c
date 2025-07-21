#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14159265358979323846

// Legge un numero float e lo controlla
void leggi_numero_e_controlla(float* numero, const char* messaggio) {
    printf("%s ", messaggio);
    if (scanf("%f", numero) != 1) {  // CORRETTO: niente &
        printf("Errore: input non valido, non è un numero float.\n");
        exit(1);
    }
}

// Calcola area del quadrato
float calcola_area_quadrato(float numero) {
    return numero * numero;
}

// Calcola area del cerchio
float calcola_area_cerchio(float numero) {
    return M_PI * pow(numero, 2);
}

// Calcola area del triangolo equilatero (corretta formula con numero^2)
float calcola_area_triangolo_equilatero(float numero) {
    return (sqrt(3) / 4) * pow(numero, 2);
}

int main() {
    float numero = 0;
    leggi_numero_e_controlla(&numero, "Inserisci un numero reale:");

    float area_quad = calcola_area_quadrato(numero);
    float area_cer = calcola_area_cerchio(numero);
    float area_tri = calcola_area_triangolo_equilatero(numero);

    printf("Area del quadrato: %.2f\n", area_quad);
    printf("Area del cerchio: %.2f\n", area_cer);
    printf("Area del triangolo equilatero: %.2f\n", area_tri);

    printf("%d",numero);

    return 0;
}
