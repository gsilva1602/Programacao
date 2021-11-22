#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    int numeros[3][4];
    int constante;
    constante = 5;
    printf("Digite os valores para matriz 2x3: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            scanf("%i", &numeros[i][j]);
        }

    }
    printf("Os numeros digitados na matriz foram: \n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(numeros[i][j] = constante * numeros[i][j]);
            printf("[%i]", numeros[i][j]);
        }
        printf("\n");
    }
    return 0;
}
