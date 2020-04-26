#include<stdio.h>
void input(int *n)
{
    printf("\n enter n:");
    scanf("%d",&*n);
}
void compute(int n,int ar[100])
{
    int i;
    for(i=1;i<=100;i++)
    {
        ar[i]=i*n;
    }
}
void output(int n,int ar[100])
{
    int i;
    printf("\n the multiples of %d is:\n",n);
    for(i=1;i<=100;i++)
    {
        printf("%d * %d = %d \n",n,i,ar[i]);
        printf("\n");
    }
}
int main()
{
    int n,ar[100];
    input(&n);
    compute(n,ar);
    output(n,ar);
    return 0;
}
