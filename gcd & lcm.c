#include<stdio.h>

int main()
{
    int n1,n2,num1,num2,rem,gcd,lcm;

    printf("input num1 = ");
    scanf("%d",&num1);
    printf("input num2 = ");
    scanf("%d",&num2);
    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    printf("gcd is %d\n",gcd);
    printf("lcm is %d\n",lcm);
    getch();
}
