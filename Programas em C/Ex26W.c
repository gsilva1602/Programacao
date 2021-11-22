#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i, a, b;
    printf("Digite um numero para abrir a sua tabuada: ");
    scanf("%i", &a);

    while(a<=0){
        printf("Erro!\nApenas numeros positivos: ");
        scanf("%i", &a);
    }

    i=1;

    while(i<=10){
        b = a*i;
        printf("\n%i x %i = %i", a, i, b);
        i = i+1;
    }

    return 0;
}
