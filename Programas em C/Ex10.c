#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x, a;
    printf("Digite um valor: ");
    scanf("%i", &a);

    printf("Digite outro valor: ");
    scanf("%i", &x);

    if(x < a){
        printf("O menor valor e: %i", x);
    }
    else{
        printf("O menor valor e: %i", a);
    }
    return 0;
}
