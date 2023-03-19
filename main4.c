#include <stdio.h>

int main(){
    int n1, n2, n3, n4, soma;

    printf("informe os numeros desejados: \n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);
    scanf("%d", &n4);

    if(n1 > 0){
        printf("O numero mostra é maior que zero: %d.\n", n1);
        soma++;
    }

    if(n2 > 0){
        printf("O numero mostra é maior que zero: %d.\n", n2);
        soma++;
    }

    if(n3 > 0){
        printf("O numero mostra é maior que zero: %d.\n", n3);
        soma++;
    }

    if(n4 > 0){
        printf("O numero mostra é maior que zero: %d.\n", n4);
        soma++;
    }

    printf("A quantidade de numeros maiores que zero é: %d.\n", soma);
}