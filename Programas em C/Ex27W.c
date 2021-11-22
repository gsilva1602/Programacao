#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, x, i;
    printf("Digite um numero para abrir a sua tabuada: ");
    scanf("%i", &x);

    while(x<=0){
        printf("Erro! Somente numeros positivos: ");
        scanf("%i", &x);
    }

    printf("No intervalo de: ");
    scanf("%i", &a);

    printf("Ate: ");
    scanf("%i", &b);

    i = b;

    while(b<a){
        printf("Erro! O segundo valor deve ser maior que o primeiro: ");
        scanf("%i", &b);
    }
    while(a<=i){
         c = x * i;
         printf("\n%i x %i = %i", x, i, c);
         i = i - 1;
    }


    return 0;
}
