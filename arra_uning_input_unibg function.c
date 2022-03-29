#include<stdio.h>


void func(int x[20], int num2){

    // method-----2
    //    for (int i = 0; i < num; i++)
    // {
    //     printf("enter the %dth number:",i+1);
    //     scanf("%d",&x[i]);
        
    // }
    
// method----1
    for (int i = 0; i < num2; i++)
    {
         printf("%d\t",x[i]);
    }
    
}
int main()
{
    int x[20],num;

    printf("how many number would you want\n");
    scanf("%d",&num);

    


    for (int i = 0; i < num; i++)
    {
        printf("enter the %dth number:",i+1);
        scanf("%d",&x[i]);
        
    }
    func(x,num);
    // // for (int i = 0; i < num; i++)
    // // {
    // //     printf("%d\t",x[i]);
    // // }
    
    return 0;
}