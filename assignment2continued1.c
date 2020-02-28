#include<stdio.h>
int main()
{
    float height;
    int age;
    char section;
    printf("\n enter height:\n");
    scanf("%f",&height);
    printf("\n enter age:\n");
    scanf("%d",&age);
    printf("\n enter section:\n");
    scanf(" %c",&section);
    printf("\n height=%f age=%d section=%c\n",height,age,section);
    return (0);
}
