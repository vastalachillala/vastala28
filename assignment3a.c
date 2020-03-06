#include<stdio.h>
int main()
{
    float a,b,sum,sub,mul,div;
    printf("\n enter two numbers\n");
    scanf("%f%f",&a,&b);
    sum=a+b;
    printf("\n sum=%f",sum);
    sub=a-b;
    printf("\n subraction=%f",sub);
    mul=a*b;
    printf("\n multiplication=%f",mul);
    div=a/b;
    printf("\n division=%f",div);
    return 0;
}