#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4,5,6,76},temp;

      for (int i = 0; i < 7/2; i++)
    {     

        temp=arr[i];
        arr[i]=arr[6-i];
        arr[6-i]=temp;
        printf("after reverse %d is %d \n",i,arr[i]);
    }
    
    
    return 0;
}