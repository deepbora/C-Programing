#include<stdio.h>
int main()
{
    for (int i = 0; i < 4; i++)
    { for (int j = 0; j <=i; j++)
    {
         printf("%c",'*');
    }
    printf("\n");
       
    }
    for (int i = 0; i < 4; i++)
    { for (int j = 0; j <=4-i-1; j++)
    {
         printf("%c",'*');
    }
    printf("\n");
       
    }
   
}