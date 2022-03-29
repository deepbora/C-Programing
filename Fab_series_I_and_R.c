#include<stdio.h>

int fabi( int n)
{   //0,1,1,2
    int a=0,b=1;//0,1
        for (int i = 0; i < n; i++)
        {
            b=a+b;//1
            a=b-a;//1...
        }
        return a;
    
}

int fabr(int n){
    //1=1 and 2=1
    //n=n-1+n-2

    if(n==1 || n==2){
        return 1;
    }else{
        return fabr(n-1)+fabr(n-2);
    }
    
}
int main()
{   int n;
    printf("Emter the number ");
    scanf("%d",&n);
    printf("the result of %dintreted fab is%d\n",n,fabi(n));
    printf("the result of %drecusive fab is%d",n,fabr(n));

    return 0;
}