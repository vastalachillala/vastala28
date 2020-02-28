#include<stdio.h>
float area(int);
int main()
{
	int r;
	float ar;
	printf("enter radius of he circle:\n");
	scanf("%d",&r);
	ar=area(r);
	printf("area of circle:%f",ar);
	return 0;
}
float area(int rad)
{
	float a;
	a=3.14*rad*rad;
	return a;
}