#include<stdio.h>

int main()
{
    int i,n,input[10];
    printf("total input = ");
    scanf("%d",&n);

    for(i=0; i<=n; i++)
    {
        printf("input %d = ",i);
        scanf("%d",&input[i]);
    }




    return 0;
}
