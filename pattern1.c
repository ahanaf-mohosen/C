#include<stdio.h>

int main()
{
    int n,row,col;
    printf("input N = ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d\t",col);
        }
        printf("\n\n");
    }


    return 0;
}
