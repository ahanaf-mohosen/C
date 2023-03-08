#include<stdio.h>

int main()
{
    while(1)
    {

    int n,row,col;
    printf("input N = ");
    scanf("%d",&n);

        for(row=1; row<=n; row++)
    {
        for(col=1; col<=n; col++)
        {
            if(row==1 || row==n || col==1 || col==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    }
    return 0;
}
