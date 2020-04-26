#include<stdio.h>
struct time
{
    int hr;
    int min;
};
typedef struct time data;
data input()
{
    data a;
    printf("\n enter hours: ");
    scanf("%d",&a.hr);
    printf("\n enter minutes: ");
    scanf("%d",&a.min);
    return a;
}
int total_convert_mins(data a)
{
    int t;
    t=a.hr*60+a.min;
    return t;
}
void output(data a,int t)
{
    printf("\n total minutes in %d hours and %d minutes is %d minutes",a.hr,a.min,t);
    printf("\n");
}
int main()
{
    data a;
    int com;
    a=input();
    com=total_convert_mins(a);
    output(a,com);
    return 0;
}
