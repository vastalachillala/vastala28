#include<stdio.h>
int main()
{
    int n,rev=0,num,rem;
    printf("\n enter a number:");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
        printf("%d is palindrome\n",num);
    else
        printf("%d is not a palindrome",num);
    return 0;
}
