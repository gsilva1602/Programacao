#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, i;
    i=1;
    a=1;
    b=1;
    c=1;
    for(int i=1; i<=20; i++){
        printf("%i + %i + %i = ", a, b, c);
        d = a + b + c;
        printf("%i\n", d);
        a = b;
        b = c;
        c = d;
    }
    return 0;
}
