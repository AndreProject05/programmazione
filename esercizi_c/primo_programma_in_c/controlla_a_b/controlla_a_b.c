#include <stdio.h>
#include <stdlib.h>

void inserisci_a_b(int* a, int* b){
printf("inserisci un numero: ");
if(scanf("%d", a) != 1){
printf("il valore inserito non e' valido");
exit(1);
}

   
printf("inserisci un numero: ");
if(scanf("%d",b) != 1){
 printf("il valore inserito non e' valido");
    exit(1);
    }
}


void b_positivo_negativo(int b){
    if(b > 0 )
        printf("il numero %d e' positivo", b);
    if(b < 0)
        printf("il numero %d e' negativo", b);
}

void a_pari_dispari(int a){
    if(a % 2 == 0)
        printf("\n%d e' pari",a);
    else
    printf("\n%d e' dispari", a);
}

int a_piu_b(int a, int b){
    return a + b;
}

int valore_massimo_a_piu_b(int a, int b){
    if(a < 0)
    a = a * -1;
    if (b < 0)
    b = b * -1;
    return a + b;
}



int main(){

    int a = 0;
    int b = 0;
    inserisci_a_b(&a, &b);
    b_positivo_negativo(b);
    a_pari_dispari(a);
    int somma = a_piu_b(a, b);
    printf("\nla somma tra %d e %d e %d", a, b, somma);
    int valore_massimo = valore_massimo_a_piu_b(a, b);
    printf("\nil valore massimo della somma ottenibile tra %d e %d e %d",a,b,valore_massimo);



}