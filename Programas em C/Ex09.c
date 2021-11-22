#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, a;
    printf("Digite um valor: ");
    scanf("%i", &x);

    printf("Digite outro valor: ");
    scanf("%i", &a);

    if(x < a){
        printf("O maior valor e: %i", a);
    }
    else{
        printf("O maior valor e: %i", x);
    }
    return 0;
}
