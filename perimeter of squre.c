#include<stdio.h>
#include<math.h>
int main()
{
    int height,base1,base2;
    float area;
    printf("Input Height of a Trapezoid = ");
    scanf("%d",&height);
    printf("Input Base1 of a Trapezoid = ");
    scanf("%d",&base1);
    printf("Input Base2 of a Trapezoid = ");
    scanf("%d",&base2);
    area=0.5*(base1+base2)*height;
    printf("Area of a Trapezoid is %.2f",area);
    getch();
}

