#include<stdio.h>
//sum of two and average of tow number using ponter and function

void func(int *a, int *b){
    int sum=*a+*b;
    int avg=sum/2;
    printf("%d\n",sum);
    printf("%d\n",avg);

}
int main()
{
    int a=20,b=10;

    func(&a,&b);
    return 0;
}