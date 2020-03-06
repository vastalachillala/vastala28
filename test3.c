#include<stdio.h>
int num(int,int,int);
int main()
{
int a,b,c,large;
printf("\n enter three numbers\n");
scanf("%d%d%d",&a,&b,&c);
large=num(a,b,c);
printf("\n largest number=%d",large);
return 0;
}
int num (int x,int y,int z)
{
int n;
n=(x>y)?((x>z)?x:z):((y>z)?y:z);
return n;
}