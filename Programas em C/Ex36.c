#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char const *argv[])
{
    int numeros[20], j, aux;
    int constante;
    constante=5;

    printf("Digite os 20 numeros: ");
    for(int i=0; i<20; i++)
    {
        scanf("%i", &numeros[i]);
    }
    for(int i=0; i<20; i++)
    {
        for(int j=i+1; j<20; j++)
        {
            if(numeros[i]>numeros[j])
            {
                aux = numeros[i];
                numeros[i]=numeros[j];
                numeros[j]=aux;
            }
        }
    }
    printf("Os numeros multiplicados e ordenados: \n");
    for(int i=0; i<20; i++)
    {
        if(numeros[i] = constante * numeros[i]);
        printf("%i\n", numeros[i]);
    }
    return 0;
}
