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
    b = 1;
    for(int i = 1; i<=100; i++){
        printf("%i + %i = ", b, i);
        b = b + i;
        printf("%i\n", b);
    }    

    return 0;
}
