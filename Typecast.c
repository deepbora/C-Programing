#include<stdio.h>

int main(){
    int m=17 ,n=89;
    float x=3.1,y,c;
    //automaticali convertion--float
    y=m*x;
        c=n/45; //so this output int-1.00000 so we use type casting 
    printf("%f \n",y);
    printf("%f \n",c);
    /* c=(float)n/45;----1.9778*/
    return 0;

}