#include <stdio.h>

int main(){
    int n1, n2, n3 , soma;

    printf("Informe do primeiro numero: \n ");
    scanf("%d", &n1);

    printf("Informe do segundo numero: \n ");
    scanf("%d" , &n2 );

    printf("Informe do terceiro numero: \n ");
    scanf("%d" , &n3);


    if(n1 > 15){
        printf("O numero seguinte é maior que 15 e sera adicionado a soma: %d.\n " , n1 );
        soma = soma + n1;
    }
    if(n2 > 15){
        printf("O numero seguinte é maior que 15 e sera adicionado a soma: %d.\n " , n2 );
        soma = soma + n2;
    }
    if(n3 > 15){
        printf("O numero seguinte é maior que 15 e sera adicionado a soma: %d.\n " , n3 );
        soma = soma + n3;
    }

    printf("A soma dos seguintes numeros maiores que 15 é: %d.\n ", soma);
}