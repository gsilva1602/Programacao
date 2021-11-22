#include <stdio.h>

int main (int argc, char *argv[])
{
    int a, b, c, d;
    float M;

    printf("Digite o primeiro numero: ");
    scanf("%i", &a);

    printf("Digite o segundo numero: ");
    scanf("%i", &b);

    printf("Digite o terceiro numero: ");
    scanf("%i", &c);

    printf("Digite o primeiro numero: ");
    scanf("%i", &d);

    M = (a + b + c + d)/4;

    printf("A media aritmedica e: %.2f", M);
    scanf("%.2f", &M);

    return 0;
}