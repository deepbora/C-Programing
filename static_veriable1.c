#include<stdio.h>


int func()
{
    static int a=6;//---->this is static variable so its preserve their value
    a++;
    return a;
}


int main()
{
    int a;
    a=func();
    printf("%d\n",a);
    a=func();
    printf("%d\n",a);

    return 0;
}