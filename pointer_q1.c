#include<stdio.h>

void func(int *ptr);
int main()
{
    int i=4;
    printf("%d \n",&i);


    func(&i);
    // func();

    
    return 0;
}

void func(int *ptr){
    printf("%d \n",ptr);//this is a address
    printf("%d \n",&ptr);//this is pointer address
    printf("%d \n",*ptr);//this print i value
    printf("%d \n",*ptr*10);//this print i value into ten times 



}

