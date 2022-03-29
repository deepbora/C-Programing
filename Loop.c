#include<stdio.h>

int main(){
    int i=110;
    for(i=1; i<=1000; i++){
        // printf("deep\n");
        // printf("%d\n",i);
    }

    while (i<=10){
        
        printf("%d\n",i);
        i=i+1;
        // i++;
    }
    do{
        i++;//i=i+1;
        printf("%d",i);
    }while (i<10);
   
 
    

    return 0;
}