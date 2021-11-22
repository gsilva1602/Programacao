#include<Stdio.h>
int main(int argc, char const *argv[])
{
    int b, n, i;
    printf("Digite um numero para abrir a sua tuabuada: ");
    scanf("%i", &n);

    while(n<=0){
        printf("Erro!\nApenas numeros positivos: ");
        scanf("%i", &n);
    }

    for(int i=0; i<=10; i++){
        b = n * i;
        printf("\n%i x %i = %i", n, i, b);
    }
    return 0;
}
