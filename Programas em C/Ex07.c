#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b, c, d, e, x, T, Tr;
    printf("Produto 1: R$");
    scanf("%f", &a);

    printf("Produto 2: R$");
    scanf("%f", &b);

    printf("Produto 3: R$");
    scanf("%f", &c);

    printf("Produto 4: R$");
    scanf("%f", &d);

    printf("Produto 5: R$");
    scanf("%f", &e);

    printf("Valor pago: R$");
    scanf("%f", &x);

    T = a + b + c + d + e;
    Tr = x - T;

    printf("Troco: R$%.2f", Tr);
    scanf("%f", &Tr);
    return 0;
}
