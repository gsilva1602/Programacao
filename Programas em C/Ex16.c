#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Lado 1: ");
    scanf("%i", &a);

    printf("Lado 2: ");
    scanf("%i", &b);

    printf("Lado 3: ");
    scanf("%i", &c);

    if((a + b) > c && (a + c) > b && (b + c) > a)
        if(a!=b && a!=c && b!=c){
            printf("E um triangulo escaleno");
        }
        else if(a==b && a==c && b==c){
            printf("E um triangulo equilatero");
        }
        else{
            printf("E um triangulo isosceles");
        }
    else{
        printf("Nao e triangulo");
    }
    return 0;
}
