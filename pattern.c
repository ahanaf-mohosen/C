#include<stdio.h>

int main()
{
    int num=1,row,col,n;
    printf("input N = ");
    scanf("%d",&n);

    for(row=1; row<=n; ++row)
    {
        for(col=1; col<=n-row; ++col)
            {
                printf(" ");
                //printf("%d",num);
                //++num;
            }
            printf("\n");
        

    }


    return 0;
}
