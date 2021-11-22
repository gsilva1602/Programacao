#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    int numeros[20];
    int constante;
    constante=5;

    printf("Digite os 20 numeros: ");
    for(int i=0; i<20; i++)
    {
        scanf("%i", &numeros[i]);
    }
    printf("Os numeros digitados multiplicados por 5 sao: \n");
    for(int i=0; i<20; i++)
    {
        if(numeros[i] = constante * numeros[i]);
        printf("%i\n", numeros[i]);
    }

    return 0;
}
