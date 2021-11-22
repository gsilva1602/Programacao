#include<stdio.h>
int main(int argc, char const *argv[])
{
    int b, n, i;
    printf("Pressione o numero 5 para abrir a sua tabuada: ");
    scanf("%i", &n);
    while(n!=5){
        printf("Erro!\nSomente o numero 5: ");
        scanf("%i", &n);
    }
    i = 1;
    while(i<=10){
        b = n * i;
        printf("\n%i x %i = %i", n, i, b);
        i = 1 + i;
    }
    return 0;
}
