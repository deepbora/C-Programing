#include<stdio.h>


#include "temp2.c";

void fuc(int c){
    
    printf("globel value: %d\n",c);

}


    extern int a;

int main()


{
    // int a=200;
 fuc(a);



    return 0;
}