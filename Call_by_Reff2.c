#include <stdio.h>

void func(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    return;
}

int main()
{
    // swap tow number--

    // int  p=10, q=20,s;
    int a=10, b=20;

    printf("%d %d \n", a, b);
    func(&a, &b); //----------> call by refferrence
    printf("%d %d ", a, b);

    return 0;

}