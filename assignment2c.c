#include<stdio.h>
int main()
{
    float f,degree;
    printf("enter degree fahrenheit:");
    scanf("%f",&f);
    degree=(f-32)*0.56;
    printf("degree celcius=%f",degree);
    return 0;
}