#include<stdio.h>


int fact1(int number){
    if(number==1 || number==0){
        return 1;

    }else{
        return(number*fact1(number-1));
    }
}
int fact(int num){
    int a=1;
    for (int i = 1; i <=num; i++)
    {
        a=a*i;
        
    }
     return a;
   
    
}


int main()
{   
    int num;
    // for (int i = 0; i < 10; i++)
    // {
    printf("Enter the number\n");
    scanf("%d",&num);
    // printf("the recusiv factorial of %d is %d\n",num,fact1(num));
    printf("the recusiv factorial of %d is %d\n",num,fact1(num));
    printf("the itreted factorial of %d is %d\n",num,fact(num));

    // }
    
    
    return 0;
}