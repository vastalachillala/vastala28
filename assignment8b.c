#include<stdio.h>
int main()
{
    char str[100];
    int i;
    printf("\n enter a string:");
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
        i++;
    }
    printf("\n converted string:");
    puts(str);
    return 0;
}