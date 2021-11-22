#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, i;
    printf("Aperte 1 para exibir a soma dos numeros de 1 a 100: ");
    scanf("%i", &a);
    while(a!=1){
        printf("Erro! Aperte 1 para exibir a soma dos numeros de 1 a 100: ");
        scanf("%i", &a);
    }
    i = 1;
    b = 1;
    while(i<=100){
        printf("%i + %i = ", b, i);
        b = b + i;
        printf("%i\n", b);
        i = i + 1;
    }
    return 0;
}
