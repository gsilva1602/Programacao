#include<stdio.h>
int main(int argc, char const *argv[])
{
    char S;
    printf("Digite F para feminino ou M para masculino: ");
    scanf("%s", &S);

    while((S!='M' && S!='m' && S!='F' && S!='f')){
        printf("Erro!\nDigite F para feminino ou M para masculino: ");
        scanf("%s", &S);
    }

    return 0;
}
