#include<stdio.h>
int star(int n);

int main(){
    
    star(7);


    

    return 0;
  
}

int star(int n){
    for (int i = 0; i < n; i++)
    {
        printf("%c" ,'*');
    }
    
    
}