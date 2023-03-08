#include<stdio.h>
int main()
{
    int num1,num2;
        printf("input num1 = ");
        scanf("%d",&num1);
        printf("input num2 = ");
        scanf("%d",&num2);
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("num1 = %d \n",num1);
    printf("num2 = %d",num2);
    getch();
}
