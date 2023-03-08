#include<stdio.h>
#include<math.h>

int main()
{
    int m[100]={2,4,-5,7,-1};
    int x,y=-5;
    for(x=0;x<5;x++)
    {
        y+=m[x];
        printf("%d",y);
    }


    return 0;
}
