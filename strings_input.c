#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);//mrthod --%[^\n]%*c
    printf("%s",s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    // for(int i=0;s[i]!='\0';i++){
    //     printf("Hello world!%s\n",s[i]);
    // }  
    return 0;
}