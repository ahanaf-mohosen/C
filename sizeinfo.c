#include<stdio.h>

int main()
{
    int i;
    float f;
    double d;
    char ch;

    printf("size of int = %d bits\n",sizeof(i)*4);
    printf("size of float = %d bits\n",sizeof(f)*4);
    printf("size of double = %d bits\n",sizeof(d)*4);
    printf("size of char = %d bits",sizeof(ch)*4);

    return 0;
}
