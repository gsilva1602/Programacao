#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, a;
    printf("Digite um valor: ");
    scanf("%i", &a);

    printf("Digite outro valor: ");
    scanf("%i", &x);

    if(x < a){
        printf("O maior numero e: %i", a);
    }
    else if(x > a){
        printf("O maior numero e: %i", x);
    }
    else{
        printf("Os numeros sao identicos!");
    }
    return 0;
}
