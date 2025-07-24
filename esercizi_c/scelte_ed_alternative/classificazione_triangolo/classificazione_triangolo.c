#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPSILON 0.0001  // Tolleranza per confronti double

void inserisci_tre_lati(double* l1, double* l2, double* l3){
    printf("Inserisci un lato (l1): ");
    if (scanf("%lf", l1) != 1){
        printf("Il valore inserito non è valido\n");
        exit(1);
    }
    printf("Inserisci un lato (l2): ");
    if (scanf("%lf", l2) != 1){
        printf("Il valore inserito non è valido\n");
        exit(1);
    }
    printf("Inserisci un lato (l3): ");
    if (scanf("%lf", l3) != 1){
        printf("Il valore inserito non è valido\n");
        exit(1);
    }
}

void triangolo_equilatero(double l1, double l2, double l3){
    if (fabs(l1 - l2) < EPSILON && fabs(l2 - l3) < EPSILON){
        printf("Il triangolo è equilatero\n");
    }
}

void triangolo_isoscele(double l1, double l2, double l3){
    if (fabs(l1 - l2) < EPSILON || fabs(l1 - l3) < EPSILON || fabs(l2 - l3) < EPSILON){
        printf("Il triangolo è isoscele\n");
    } else {
        printf("Il triangolo è scaleno\n");
    }
}

void triangolo_rettangolo(double l1, double l2, double l3){
    double a = l1, b = l2, c = l3;

    // Ordina i lati: a <= b <= c
    if (a > b) { double t = a; a = b; b = t; }
    if (b > c) { double t = b; b = c; c = t; }
    if (a > b) { double t = a; a = b; b = t; }

    if (fabs(c*c - (a*a + b*b)) < EPSILON){
        printf("Il triangolo è rettangolo\n");
    }
}

int main(){

    double l1 = 0;
    double l2 = 0;
    double l3 = 0;

    inserisci_tre_lati(&l1, &l2, &l3);

    // Verifica validità triangolo
    if ((l1 + l2 <= l3) || (l1 + l3 <= l2) || (l2 + l3 <= l1)){
        printf("I lati inseriti NON formano un triangolo valido\n");
        return 1;
    }

    triangolo_equilatero(l1, l2, l3);

    // Se non è equilatero, controlla tipo
    if (!(fabs(l1 - l2) < EPSILON && fabs(l2 - l3) < EPSILON)){
        triangolo_isoscele(l1, l2, l3);
    }

    triangolo_rettangolo(l1, l2, l3);

    return 0;
}
