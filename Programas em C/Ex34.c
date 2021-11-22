#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    int numeros[10];
    int comparando;
    comparando=0;

    printf("Digite os 10 numeros: ");
    for(int i=0; i<10; i++)
    {
        scanf("%i", &numeros[i]);
    }
    for(int i=0; i<10; i++)
    {
        if(numeros[i] >= comparando)
        {
            comparando = numeros[i];
        }
    }
    printf("O maior numero e: %i", comparando);
    return 0;
}
