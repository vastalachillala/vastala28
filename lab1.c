#include<stdio.h>
int main()
{
	float si,p,t,r;
	printf("\n enter principle:\n");
	scanf("%f",&p);
	printf("\n enter time:\n");
	scanf("%f",&t);
	printf("\n enter rate:\n");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("\n simple interest=%0.2f",si);
	return (0);
}
