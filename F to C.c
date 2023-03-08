#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f fahrenheit = %.2f celsius", fahrenheit, celsius);
    getch();
}
