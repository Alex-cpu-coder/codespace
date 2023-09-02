#include <stdio.h>
int main (void)
{
    int a = 10, b = 20;
    a = a + b; // 30 = 10 + 10
    b = a - b; // 20 = 30 - 20
    a = a - b; // 10 = 20 - 10
    printf("after swapping value is a = %d b = %d\n",a,b);
 



}