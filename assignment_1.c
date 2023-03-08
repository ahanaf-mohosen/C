#include<stdio.h>
int main()
{
    float num, average, waver, total;
    for(int i = 1; i < 4; i++)
    {
        printf("Input C%d Result: ",i);
        scanf("%f",&num);
        total += num;
    }

    average = total / 3;
    waver = average * 0.10;
    
    printf("Your Waver is %f",waver);
    return 0;
}