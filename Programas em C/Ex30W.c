#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, i;
    i=1;
    a=1;
    c=1;
    while(i<=30){
        printf("%i + %i = ", a, c);
        b = a + c;
        printf("%i\n", b);
        a = c;
        c = b;
        i = i + 1;
    }
    return 0;
}
