#include <stdio.h>
#include <stdlib.h>

void inserisci_a_b(double* a, double* b){
    while (1) {
        printf("\nInserisci a: ");
        if (scanf("%lf", a) != 1) {
            printf("Input non valido per 'a'. Caratteri nel buffer: ");

            int c;
    
            while ((c = getchar()) != '\n') {
                printf("[%c] ", c);
            }
            printf(" --> eliminati.\n");

            continue;
        }
        break;
    }

    while (1) {
        printf("Inserisci b: ");
        if (scanf("%lf", b) != 1) {
            printf("Input non valido per 'b'. Caratteri nel buffer: ");

            int c;
            while ((c = getchar()) != '\n') {
                printf("[%c] ", c);
            }
            printf(" --> eliminati.\n");

            continue;
        }
        break;
    }
}

float equazione_primo_grado(double a, double b){
    double x = 0;
    if(a == 0 && b != 0 ){
        printf("\nhai inserito (a): %lf e (b): %lf. L'equazione è impossibile",a,b);
            exit(1);
    }
    else{
        x = (b * - 1) / a;
        return x;
    }
    
}
int main(){
double a = 0;
double b = 0;
double x = 0;
printf("\nBenvenuti!. In questo programma calcoleremo: ax + b = 0");
inserisci_a_b(&a, &b);
x = equazione_primo_grado(a, b);
printf("\nl'equazione %lfx + %lf = 0 fa : x = %lf",a,b,x);
}