#include<stdio.h>
#include<math.h>

#define pi 3.1416
int main()
{
    int n;
    float area;
    printf("input radious = ");
    scanf("%d",&n);
    area = pi * n* n;
    printf("area of a circle = %f",area);
    return 0;
}
