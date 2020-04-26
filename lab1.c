#include<stdio.h>
struct interestscheme
{
	int p;
	float t;
	float r;
};
typedef struct interestscheme Data;
Data input()
{
	Data a;
	printf("\n enter principal value: ");
	scanf("%d",&a.p);
	printf("\n enter the time period in years: ");
	scanf("%f",&a.t);
	printf("\n enter rate: ");
	scanf("%f",&a.r);
	return a;
}
float compute(Data a)
{
	float s;
	s=(a.p*a.t*a.r)/100;
	return s;
}
void output(Data a,float s)
{
	printf("\n For the given\n Principle value:%d\n Time:%0.2f\n Rate:%0.2f\n simple interest is %0.2f",a.p,a.t,a.r,s);
}
int main()
{
	Data a;
	float s;
	a=input();
	s=compute(a);
	output(a,s);
	return 0;
}
