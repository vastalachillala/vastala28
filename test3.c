#include<stdio.h>
void input(int *a,int *b,int *c)
{
    printf("\n enter 3 integer: ");
    scanf("%d%d%d",&*a,&*b,&*c);
}
int compute(int a,int b,int c)
{
    int s;
    if((a>=b)&&(a>=c))
    {
        s=a;
    }
    else if(b>=c)
    {
        s=b;
    }
    else
    {
        s=c;
    }
    return s;
}
void output(int a,int b,int c,int s)
{
    printf("\n the largest of %d, %d and %d is %d",a,b,c,s);
    printf("\n");
}
int main()
{
    int a,b,c,s;
    input(&a,&b,&c);
    s=compute(a,b,c);
    output(a,b,c,s);
    return 0;
}
