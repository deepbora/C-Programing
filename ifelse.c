#include <stdio.h>
// find the big number--

int main()
{
    int a, b, c, big;
    printf("enter the three number :");
    scanf("%d %d %d", &a, &b, &c);
    // if (a > b)
    // {
    //     big = a;
    // }
    // else
    // {
    //     big = b;
    // }
    // if (a > c)
    // {
    //     big = a;
    // }
    // else
    // {
    //     big = c;
    // }
    // if (b > c)
    // {
    //     big = b;
    // }
    // else
    // {
    //     big = c;
    // }
    // neasted---
    if (a > b)
        if (a > c)
        {
            big = a;
        }
        else
            {
                big = b;
            }  
        else
            {
                big = c;
            }
    
    if (b > c)
    {
        big = b;
    }
    else
    {
        big = c;
    }

    printf("%d\n \a", big);
    return 0;
}