#include <stdio.h>

int main (void){

int n , a , b , c, rev;
printf("enter the value of n \n");
scanf("%d", &n);
a = n %10;
n = n/10;

b = n %10;
n = n/10;

c = n %10;
n = n / 10;

// sum = a + b + c;
// printf("sum = %d\n",sum);

rev = (a*100) + (b*10) + (c * 1);
printf("the sum of  reverse value of n is = %d",rev);


}












