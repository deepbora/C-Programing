#include<stdio.h>
int main()
{
    //pointer to pointer 

    int i=365;
    int *ptr;
    int **ptr_ptr;
    int ***p;
    ptr=&i;
    ptr_ptr=&ptr;
    p=&ptr_ptr;
    
    printf("%d\n",*ptr);

    printf("%d\n",**ptr_ptr);
    printf("%d\n",**ptr_ptr);

    return 0;
}