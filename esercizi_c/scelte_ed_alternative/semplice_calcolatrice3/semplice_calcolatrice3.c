#include <stdio.h>

// Pulisce il buffer e stampa i caratteri scartati
int svuota_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF){
         printf("[%c]", c);
    }
    printf("\n --> eliminati.\n");
    return c;
}

void inserisci_due_operandi(int* operando1, int* operando2){
    while (1) {
        printf("Inserisci il primo operando: ");
        if (scanf("%d", operando1) != 1) {
            printf("Valore non corretto\n");
            svuota_buffer();
            continue;
        }
        break;
    }

    while (1) {
        printf("Inserisci il secondo operando: ");
        if (scanf("%d", operando2) != 1) {
            printf("Valore non corretto\n");
            svuota_buffer();
            continue;
        }
        break;
    }
}

int menu(int operando1, int operando2) {
    int scelta = 0;

    while (1) {
        printf("Inserisci l'operazione da eseguire:\n(1) somma\n(2) differenza\nScelta: ");
        if (scanf("%d", &scelta) != 1) {
            printf("Valore non corretto\n");
            svuota_buffer();
            continue;
        }

        switch (scelta) {
            case 1:
                return operando1 + operando2;
            case 2:
                return operando1 - operando2;
            default:
                printf("Operazione non valida\n");
                continue;
        }
    }
}

int main() {
    int operando1 = 0;
    int operando2 = 0;

    inserisci_due_operandi(&operando1, &operando2);

    int risultato = menu(operando1, operando2);
    printf("L'operazione scelta fa: %d\n", risultato);

    return 0;
}
