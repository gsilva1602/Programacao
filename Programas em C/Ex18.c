#include<stdio.h>
int main(int argc, char const *argv[])
{
    float P, A, X;
    char S, M, F;
    printf("Peso: ");
    scanf("%f", &P);

    printf("Sexo: ");
    scanf("%s", &S);

    printf("Altura: ");
    scanf("%f", &A);

    X = P / (A*A);
    S == M || S == F;

    if(S == F){
        if(X<19){
            printf("Abaixo do peso");
        }
        else if(X<24){
            printf("Peso ideal");
        }
        else{
            printf("Acima do peso");
        }
    } 
    else{
        if(X<20){
            printf("Abaixo do peso");
        }
        else if(X<25){
            printf("Peso ideal");
        }
        else{
            printf("Acima do peso");
        }
    }
    return 0;
}
