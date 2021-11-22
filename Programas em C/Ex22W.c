#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, n;
    printf("Digite um numero positivo: ");
    scanf("%i", &n);

    while(n<=0){
        printf("Erro! Somente numeros positivos\nTente novamente: ");
        scanf("%i", &n);
    }

    return 0;
}
