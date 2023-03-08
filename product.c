#include<stdio.h>

int main()

{
    int num1,num2,product;
    printf("input num1 : ");
    scanf("%d",&num1);
    printf("input num2 : ");
    scanf("%d",&num2);
    product = num1*num2;
    printf("product = %d*%d \n    = %d",num1,num2,product);
    return 0;
}

