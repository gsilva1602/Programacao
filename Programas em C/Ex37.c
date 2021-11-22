#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    int numeros[20];
    int qnt;
    printf("Digite quantos vetores deseja (maximo 20): ");
    scanf("%i", &qnt);
    while(qnt>20)
    {
        printf("Erro! maximo de 20 vetores, tente novamente: ");
        scanf("%i", &qnt);
    }
    printf("Digite os vetores: ");
    for(int i=0; i<qnt; i++)
    {
        scanf("%i", &numeros[i]);
    }
    printf("Agora digite o vetor para saber a sua posicao: ");
    for(int i=0; i<=0; i++)
    {
        scanf("%i", &numeros[i]);
    }
    for(int i=0; i<=qnt; i++)
    {
    
    }
    return 0;
}
