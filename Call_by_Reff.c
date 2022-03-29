#include<stdio.h>
void strp(char *ptr){
  
    int i;
     for(i=0;ptr[i] != '\0';i++){
        // printf("%c",*(ptr+i));
        printf("%c",*(ptr+i));


    }


int main()
{
    char str[30]="deep";
    strp(str);//----call by referecnce---

    
    return 0;
}