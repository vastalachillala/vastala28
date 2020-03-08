#include<stdio.h>
int main()
{
    int n;
    printf("\n enter age of the person");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("\n person is eligible");
    }
    else
    {
        printf("\n person is not eligible");
    }
    return 0;
}