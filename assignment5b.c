#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("\n enter n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    avg=sum/n;
    printf("\n average=%f",avg);
    return 0;
}