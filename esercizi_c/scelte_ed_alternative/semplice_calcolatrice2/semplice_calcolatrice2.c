#include <stdio.h>

void inserisci_numeri(double* n1, double*n2){
    while(1){
        printf("inserisci il primo numero: ");
        if (scanf("%lf", n1) != 1){
                printf("\nil valore inserito non è valido");
                int c;
                while(( c = getchar()) != '\n'){
                    printf("[%c]", c);
                }
                printf("\n --> eliminati.\n");
                continue;
        }
        break;
    }

    while(1){
        printf("inserisci il secondo numero: ");
        if (scanf("%lf", n2) != 1){
                printf("\nil valore inserito non è valido");
                int c;
                while(( c = getchar()) != '\n'){
                    printf("[%c]", c);
                }
                printf("\n --> eliminati.\n");
                continue;
        }
        break;                  
    }
}

int mostraMenu() {
    int scelta;

    printf("=== MENU OPERAZIONI ===\n");
    printf("1. Somma\n");
    printf("2. Sottrazione\n");
    printf("3. Moltiplicazione\n");
    printf("4. Divisione\n");
    printf("Scegli un'operazione (1-4): ");
    
    while (scanf("%d", &scelta) != 1 || scelta < 1 || scelta > 4) {
        printf("\nScelta non valida. Inserisci un numero tra 1 e 4: ");
        while(getchar() != '\n');
    }

    return scelta;
}

double calcola(int scelta, double n1, double n2){
    if(scelta == 1)
        return n1 + n2;
    if(scelta == 2)
        return n1 - n2;
    if(scelta == 3)
        return n1 * n2;
    if(scelta == 4)
        return n1 / n2;
}


int main(){

double n1, n2;
int scelta = mostraMenu();
inserisci_numeri(&n1, &n2);
double risultato = calcola(scelta, n1, n2);
printf("risultato: %lf", risultato);


}