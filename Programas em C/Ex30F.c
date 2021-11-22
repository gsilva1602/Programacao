#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, i;
    a=1;
    c=1;
    for(int i=1; i<=30; i++){
        printf("%i + %i = ", a, c);
        b = a + c;
        printf("%i\n", b);
        a = c;
        c = b;
    }
    return 0;
}
