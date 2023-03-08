#include<stdio.h>
int main()
{
    float math,physics,chemistry,biology,english;
    float total,average,percentage;
    char grade;

     printf("input    math   number : ");
    scanf("%f",&math);
     printf("input  physics  number : ");
    scanf("%f",&physics);
     printf("input chemistry number : ");
    scanf("%f",&chemistry);
     printf("input  biology  number : ");
    scanf("%f",&biology);
     printf("input  english  number : ");
    scanf("%f",&english);

         total = math+physics+chemistry+biology+english;
       average = total/5.0;
    percentage = (total/500.0)*100;


    if(average >= 80 && average <= 100)
    {
        grade = 'A';
    }
    else if(average >= 70 && average < 80)
    {
        grade = 'B';
    }
    else if(average >= 60 && average < 70)
    {
        grade = 'C';
    }
    else if(average >= 50 && average < 60)
    {
        grade = 'D';
    }
    else if(average >= 40 && average < 50)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }


    printf("\n  total  mark is %.2f/500",total);
    printf("\n average mark is %.2f",average);
    printf("\n  percentage  is %.2f",percentage);
    printf("\n        grade is '%c'",grade);
    return 0;
}
