#include<stdio.h>
int main()
{
    int num;
    printf("input any number : ");
    scanf("%d",&num);

    if(num%17==0 && num%19==0)
    {
        printf("%d is divisible by 17 and 19.",num);
    }
    else
    {
        printf("%d is not divisible by 17 and 19.",num);
    }
    return 0;
}
