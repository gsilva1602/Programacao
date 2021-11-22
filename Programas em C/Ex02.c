#include <stdio.h>
int main(int argc, char *argv[])
{
    int a, A;
    {
        printf("Digite o valor do lado do quadrado: ");
        scanf("%i", &a);

        A = a * a;

        printf("A area do quadrado e: %i", A);
        scanf("%i", &A);

        return 0;
    }
}