#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, i;
    printf("Aperte 1 para exibir a tabuada do 1 ao 20: ");
    scanf("%i", &c);
    while(c!=1){
        printf("Aperte o numero 1: ");
        scanf("%i", &c);
    }
    for(int a = 1; a<=20; a++){
        printf("\n\n");
       for(int i = 1; i<=10; i++){
           b = a * i;
           printf("%i x %i = %i\n", a, i, b);
       }
    }
    return 0;
}

