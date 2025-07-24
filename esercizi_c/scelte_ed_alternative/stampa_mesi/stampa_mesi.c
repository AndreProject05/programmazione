#include <stdio.h>

int main() {
    int mese;

    // Chiediamo all'utente di inserire il numero del mese
    printf("Inserisci un numero da 1 a 12 per il mese: ");
    scanf("%d", &mese);

    switch (mese) {
        case 1:
            printf("Gennaio\n");
            break;
        case 2:
            printf("Febbraio\n");
            break;
        case 3:
            printf("Marzo\n");
            break;
        case 4:
            printf("Aprile\n");
            break;
        case 5:
            printf("Maggio\n");
            break;
        case 6:
            printf("Giugno\n");
            break;
        case 7:
            printf("Luglio\n");
            break;
        case 8:
            printf("Agosto\n");
            break;
        case 9:
            printf("Settembre\n");
            break;
        case 10:
            printf("Ottobre\n");
            break;
        case 11:
            printf("Novembre\n");
            break;
        case 12:
            printf("Dicembre\n");
            break;
        default:
            printf("Numero non valido. Inserisci un numero da 1 a 12.\n");
            break;
    }

    return 0;
}
