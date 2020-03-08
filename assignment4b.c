#include<stdio.h>
int main()
{
    int n;
    printf("\n enter age of the person");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("\n eligible to vote");
    }
    else
    {
        printf("\n not eligible to vote");
    }
    return 0;
}