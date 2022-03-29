#include<stdio.h>
int main()
{
    int x[20],num;

    printf("how many number would you want\n");
    scanf("%d",&num);


    for (int i = 0; i < num; i++)
    {
        printf("enter the %dth number:",i+1);
        scanf("%d",&x[i]);
        // func(x);
    }
    for (int i = 0; i < num; i++)
    {
        printf("%d\t",x[i]);
    }
    
    return 0;
}