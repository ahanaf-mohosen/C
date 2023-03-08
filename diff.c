#include<stdio.h>
int main()
{
    int num1,num2,diff;
    printf("input num1 : ");
    scanf("%d",&num1);
    printf("input num2 : ");
    scanf("%d",&num2);
    diff = num1-num2;
    printf("diff = %d-%d \n    = %d",num1,num2,diff);
    getch();
}

