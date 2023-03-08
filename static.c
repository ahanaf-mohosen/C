#include<stdio.h>

int main()
{
    func();
    func();
    func();
}

void func()
{
    int a = 10;
    auto int b = 20;
    a++;
    b++;
    printf("%d %d\t\t",a,b);
}
