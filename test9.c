#include<stdio.h>
void swap(int, int);
void swap1(int *,int *);
int main()
{
	int a,b;
	printf("\n Enter two numbers: ");
	scanf("%d%d",&a,&b);
	swap(a,b);
	printf("\n using call by value:");
	printf("\n Value of a= %d",a);
	printf("\n Value of b= %d",b);
	swap1(&a,&b);
	printf("\n using call by reference:");
	printf("\n Value of a= %d",a);
	printf("\n Value of b= %d",b);
	return 0;
}
void swap(int p, int q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}
void swap1(int *p, int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
