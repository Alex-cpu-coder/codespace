#include<stdio.h>
int main(void)
{
    int x , y;
    printf("enter the value of x and y\n" );
    scanf("%d", &x , &y);
    int z = x + y;
    printf("the sum of x and y %d\n",z);
    return 0;
}