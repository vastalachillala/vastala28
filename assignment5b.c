#include<stdio.h>
int input();
int compute(int);
void output(float);
int main()
{
    int in,com;
    in=input();
    com=compute(in);
    output(com);
    return 0;
}
int input()
{
    int n;
    printf("\n enter n:");
    scanf("%d",&n);
    return n;
}
int compute(int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    avg=sum/n;
    return avg;
}
void output(float avg)
{
    printf("\n average=%f",avg);
}
