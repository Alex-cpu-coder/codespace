#include <stdio.h>
int main(void)
{
    int n = 123, a,b,c,sum;
    a = n % 10;
    n = n / 10;

    b = n % 10;
    n = n / 10;

    c = n % 10;
    n = n / 10;

    sum = a + b + c;
    printf("the value of a , b ,c = %d\n",sum);




}


