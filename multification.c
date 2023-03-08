#include<stdio.h>

int main()
{
    while(1)
    {
        int sum,i;
        printf("Enter any Number = ");
        scanf("%d",&sum);

        for(i=1; i<=10; i++)
        {
            printf("%d X %d = %d \n",sum,i,sum*i);
        }
    }
    return 0;
}
