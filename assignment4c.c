#include<stdio.h>
int main()
{
    char ch;
    printf("\n enter a character");
    scanf(" %ch",&ch);
    if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
    {
        printf("\n entered character is a vowel");
    }
    else
    {
        printf("\n entered character is a consonant");
    }
    return 0;
}