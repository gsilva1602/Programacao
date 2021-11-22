#include<stdio.h>
int main(int argc, char const *argv[])
{
    float p1, p2, m;

    printf("Valor da P1: ");
    scanf("%f", &p1);

    printf("Valor da P2: ");
    scanf("%f", &p2);

    m = (p1 + (2*p2))/3;

    if(m>5.0){
        printf("\nAprovado =)");
    }
    else{
        printf("\nReprovado =(");
    }
    return 0;
}
