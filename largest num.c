#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("input num1 = ");
    scanf("%d",&num1);
    printf("input num2 = ");
    scanf("%d",&num2);
    printf("input num3 = ");
    scanf("%d",&num3);
    if(num1>num2&&num1>num3)
    {
        printf("the largest number is %d.",num1);
    }
    if(num2>num1&&num2>num3)
    {
        printf("the largest number is %d.",num2);
    }
    if(num3>num1&&num3>num2)
    {
        printf("the largest number is %d.",num3);
    }
    return 0;
}
