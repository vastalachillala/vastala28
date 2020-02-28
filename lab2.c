#include<stdio.h>
float area(float);
int main()
{
	float r,ar;
	printf("enter radius of he circle:\n");
	scanf("%f",&r);
	ar=area(r);
	printf("area of circle:%f",ar);
	return 0;
}
float area(float rad)
{
	float a;
	a=3.14*rad*rad;
	return a;
}