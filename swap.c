#include <stdio.h>
int main (void)
{
    int a = 10, b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("after swapping value is a = %d b = %d\n",a,b);
    
    


}