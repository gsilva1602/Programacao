#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float b, h, A;
    
    printf("Digite o valor da base do triangulo: ");
    scanf("%f", &b);

    printf("Digite o valor da altura do triangulo: ");
    scanf("%f", &h);

    A = (b * h)/2;

    printf("A area do triangulo e: %.2f", A);
    scanf("%f", &A);

    return 0;
  
}
