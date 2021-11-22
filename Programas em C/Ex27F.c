#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, x, i;
    printf("Digite um numero para a tabuada: ");
    scanf("%i", &x);

    while(x<=0){
        printf("Erro! Somente numeros positivos: ");
        scanf("%i", &x);
    }

    printf("No intervalo de: ");
    scanf("%i", &a);

    printf("Ate: ");
    scanf("%i", &b);

    while(b<a){
        printf("Erro! O segundo valor deve ser maior que o primeiro: ");
        scanf("%i", &b);
    }

    for(int i=b; i>=a; i--){
        c = x * i;
        printf("\n%i x %i = %i", x, i, c);
    }
    return 0;
}
