#include<stdio.h>
#include<math.h>
int main()
{
    int age,vippass;
    printf("input age = ");
    scanf("%d",&age);
    vippass=0;
    vippass=1;
    if(age>=18 && age<=70 || vippass==0)
    {
        printf("you can swim.");
    }
    else
    {
        printf("you cann't swim.");
    }
    return 0;
}
