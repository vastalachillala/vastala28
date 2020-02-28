#include<stdio.h>
int main()
{
    int a,b;
    printf("enter 2 numbers:\n");
    scanf("%d%d",&a,&b);
    if(a==b)
    {
        printf("they are equal");
    }
    else
    {
        if(a<b)
        {
            printf("%d is smaller than %d",a,b);
        }
        else
        {
            printf("%d is larger than %d",a,b);
        }
    }
    return 0;
}
