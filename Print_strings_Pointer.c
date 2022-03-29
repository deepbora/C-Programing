#include<stdio.h>
int main()
{
      char str[10]="deep";
    char *ptr;
    int i;
    // ptr=&str[0];--or
    ptr=str;
    for (int i = 0; ptr[i] != '\0'; i++)
    {
         printf("%c",*(ptr+i));
    }
    
    return 0;
}