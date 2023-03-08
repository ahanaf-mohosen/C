#include<stdio.h>

int main()
{
    int num=15,row,col,n;
    printf("input N = ");
    scanf("%d",&n);

    for(row=n; row>=1; --row)
    {
        for(col=1; col<=row; col++)
            {
                printf("%d",num);
                num--;
            }
            printf("\n");

    }


    return 0;
}

