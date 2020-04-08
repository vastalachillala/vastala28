#include <stdio.h>
void input(int arr[], int n);
int compute(int arr[], int n);
void output(float avg);
int main()
{
    int num[100],n,com;
    printf("\n Enter the size of the array : ");
    scanf("%d",&n);
    input(num, n);
    com=compute(num, n);
    output(com);
    return 0;
}
void input(int arr[100], int n)
{
    int i;
    printf("\n enter integers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
}
int compute(int arr[100], int n)
{
    int i,sum=0;
    float avg;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/n;
    return avg;
}
void output(float avg)
{
    printf("\n average of the numbers=%f",avg);
}
