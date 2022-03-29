#include<stdio.h>
#include<string.h>

  void f(int *p, int *q)
    {
        p=q;
        *p=2;
    }
    
int main(){
 


    int a=1,*p;
    
    
    p=&a;
    printf("adress of a :%p\n",p);
    printf("value of a :%p\n",*p);


    int n[25];
    n[0]=100;
    n[24]=200;
    printf("%d %d",*n,*(n+24)+*(n+0));


    int i=0, j=1 ;
    f(&i,&j);
    printf("%d %d",i,j);
    char a[50]="deepankar Nankani";
    char *p=a+10;
    // chat *p =a +10;
    printf("%c %c %s",*(a+10),*p,p);
   


   int a=10;
   int *ptr=&a;

   printf("the address of pointer is : %p\n",&ptr);
   printf("the address of a is : %p\n",&a);
   printf("the address of a is : %p\n",ptr);
   printf("the value of a is : %d\n",*ptr);
   printf("the value of a is : %d\n",a);

   
    int b[10];
    b[0]=10;

   printf("the address of a is : %d\n",*b);

   //pionter arithmetic---

   printf("poiter arithmetic--");

   int x=1;
   int *y=&x;
   printf("%d\n",y);
   printf("%d\n",y+1);
   printf("%d\n",y+2);
   printf("%d\n",&x+1);
   printf("%d\n",x);
   printf("%d\n",*y);


   






    



  

}