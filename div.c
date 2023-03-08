#include<stdio.h>
int main()
{
    float num1,num2,div;
    printf("input num1 : ");
    scanf("%f",&num1);
    printf("input num2 : ");
    scanf("%f",&num2);
    div = num1/num2;
    printf("div=%.2f/%.2f\n=%.2f",num1,num2,div);
    getch();
}

