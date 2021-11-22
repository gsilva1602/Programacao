#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, d, i;
    i=1;
    a=1;
    b=1;
    c=1;
    while(i<=20){
        printf("%i + %i + %i = ", a, b, c);
        d = a + b + c;
        printf("%i\n", d);
        a = b;
        b = c;
        c = d;
        i = i + 1;
    }
    return 0;
}
