#include<stdio.h>
int main()
{
     int arr[10]={23,53,76,88,762,3,4,66};

     //print addres og array index--
     //method1--
     printf("the adrres of array is :%d\n",&arr[0]);
    //  method2--
     printf("the adrres of array is :%d\n",arr);//pionter array arithmetic
     printf("the adrres of array is :%d\n",&arr[1]);
     printf("the adrres of array is :%d\n",arr+1);
       printf("the adrres of array is :%d\n",&arr[2]);
     printf("the adrres of array is :%d\n",arr+2);
    //  arr++ we cant do becoze arr means the addres of arr[0]...adress alwz constant---
    //  arr[0]++;
    // *arr+1;
    //  printf("%d",*arr);

    //print the values---
    
    // //method 1
     printf("the value of array is :%d\n",arr[0]);
     //metho2 --
     printf("the value of array is :%d\n",*arr);
    //method 3--
     printf("the value of array is :%d\n",*(&arr[0]));
    
     printf("the value of array is :%d\n",*(arr+1));


    return 0;
}