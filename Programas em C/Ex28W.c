#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, i;
    printf("Aperte 1 para exibir a tabuada do 1 ate o 20: ");
    scanf("%i", &c);
    if(c!=1){
        printf("Aperte o numero 1: ");
        scanf("%i", &c);
    }
    a = 1;
    while(a<20){
    a = a + 1;
    i = 1;
    printf("\n\n");
    while(i<=10){
        b = a * i;  
        printf("%i x %i = %i\n", a, i, b);
        i = i + 1;
            } 
    }

    return 0;
}
