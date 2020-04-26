#include<stdio.h>
float input();
float compute(float);
void output(float,float);
int main()
{
    float in,com;
    in=input();
    com=compute(in);
    output(in,com);
    return 0;
}
float input()
{
    float r;
    printf("\n enter the radius of the circle:");
    scanf("%f",&r);
    return r;
}
float compute(float r)
{
    float ar;
    ar=3.14*r*r;
    return ar;
}
void output(float r,float ar)
{
    printf("\n area of circle of radius %0.2f is %0.2f",r,ar);
    printf("\n");
}
