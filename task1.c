#include <stdio.h>
int main(void)
{
    int n = 123, a,b,c,rev;
    a = n % 10;
    n = n / 10;

    b = n % 10;
    n = n / 10;

    c = n % 10;
    n = n / 10;

    rev = (a*100) + (b * 10) + (c * 10);
    //sum = a + b + c;
    //printf("the value of  a = %d b = %d c = %d\n",a,b ,c );

    printf("a = %d b = %d c = %d\n",a,b ,c );


}



