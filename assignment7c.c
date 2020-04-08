#include <stdio.h>
int main()
{
    int ar[100],i,j,n,count=0;
    printf("\n Enter the number of elements:");
    scanf("%d",&n);
    printf("\n Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }     
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]==ar[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\n Total number of duplicate elements=%d",count);    
    return 0;
}
