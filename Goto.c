#include<stdio.h>


int main(){

    for(int i=0;i<10;i++){
        printf("%d\n",i);
        for (int j = 0; j < i; j++)
        {
            printf("deep\n");
            if(i==5){
                goto end;
            }
        }
        

    }
    end:


    return 0;
}