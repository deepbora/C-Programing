#include<stdio.h>


int main(){
    int sum(int a, int b);//declearation
    int a ,b ,c;
    a=2;
    b=4;
    c=sum(a,b);
    printf("%d",c);
    return 0;
}
int sum(int a, int b){
    c=a+b;
    return c;//defination
}