#include<stdio.h>
#include<math.h>

int main()
{
    float x,result;

    printf("input a number = ");
    scanf("%f",&x);

    result = round(x);
    printf("round(%f) = %f",x,result);


    return 0;
}
