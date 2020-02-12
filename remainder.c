#include<stdio.h>
int main()
{
int a,b,remainder;
printf("\n enter two numbers:\n");
scanf("%d%d",&a,&b);
remainder=a%b;
printf("remainder=%d",remainder);
return (0);
}