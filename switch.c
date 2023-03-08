#include<stdio.h>

int main()
{
    int choice;
    float temp,convertedtemp;

    printf("Temperature Conversion\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
    {
        printf("Inter the Fahrenheit Temperature = ");
        scanf("%f",&temp);
        convertedtemp = 5*(temp-32)/9;
        printf("The Celsius Temperature is %f",convertedtemp);
        break;
    }
    case 2:
    {
        printf("Inter the Celsius Temperature = ");
        scanf("%f",&temp);
        convertedtemp =((9*temp)/5)+32;
        printf("The Fahrenheit Temperature is %f",convertedtemp);
        break;
    }
    default:
        printf("Not a Correct Option");
    }
    return 0;
}
