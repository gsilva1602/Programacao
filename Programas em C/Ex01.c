#include<stdio.h>
int main(int argc, char *argv[])
{
    int a, b, A;
    {
        printf("Digite a base do retangulo: ");
        scanf("%i", &a);

        printf("Digite a altura do retangulo: ");
        scanf("%i", &b);

        A = a * b;

        printf("A area do retangulo e: %i", A);
        scanf("%i", &A);

        return 0;
    }
}