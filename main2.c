#include <stdio.h>

int main(){
    int n1 , n2 , soma;

    printf("Digite o primeiro valor: \n");
    scanf("%d", &n1);

    printf("Digite o segundo valor: \n");
    scanf("%d", &n2);

    soma = n1 + n2;

    if (soma > 10){
        printf("o valor da soma é: %d.\n ", soma);
    }

}