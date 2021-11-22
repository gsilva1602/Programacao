#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, impares, x, c, d, b;
    a=2;
    impares=1;
    d = 2;

    printf("Digite a quantidade de numeros que serao somados em sequencia: ");
    scanf("%i", &x);
    while((x<=0) || (x>100))
    {
        printf("Erro! Digite um numero positivo e menor que 100, tente novamente: ");
        scanf("%i", &x);
    }
    printf("%i\n", a);
    for(int i=1; i<x; i++)
    {
        impares = impares + 2;
        a = impares + a;
        printf("%i\n", a);
        d = d + a;
    }
    printf("Soma da sequencia: %i", d);
    return 0;
}
