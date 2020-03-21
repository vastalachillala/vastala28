1.
    #include<stdio.h>
    int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("\n");
        for(j=1;j<=3;j++)
        {
            printf("@\t");
        }
    }
    return 0;
}


2.
    #include<stdio.h>
    int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    }
    return 0;
}


3.
    #include<stdio.h>
    int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=4;j++)
        {
            printf("%d\t",j);
        }
    }
    return 0;
}


4.
    #include<stdio.h>
    int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("%d\t",j);
        }
    }
    return 0;
}


5.
    #include<stdio.h>
    int main()
{
    int i,j;
    for(i=1; i<=5; i++) 
    {
        for(j=1; j<=i; j++) 
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}


6.
    #include <stdio.h>
    int main() 
{
    int i, j;
    for (i=1;i<=3;i++) 
    {
        printf("\n");
        for (j=1;j<=3;j++) 
        {
            printf(" %c",'A'-1 + i);
        }
    }
    return 0;
}
