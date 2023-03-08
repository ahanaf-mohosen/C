#include<stdio.h>

int main()
{
    char lower,upper;

    printf("input lowercase letter = ");
    scanf("%c",&lower);
    printf("the uppercase letter is = %c",toupper(lower));

    return 0;
}
