#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
	
	//method 1
	
	 gets(s); //or scanf("%s",s);----it print only string untile the first space
     printf("%s", s);
	
	//method 2
    scanf("%[^\n]%*c", &s);//mrthod --%[^\n]%*c it print all string including space
    printf("%s",s);
	
	//method 3
	
	fgets(s, 100, stdin);
   printf("%s", str);//it print all string including space
   
   //method 4
   scanf("%[^\n]s",s);//it print all string including space
      printf("%s",s);
	
	
	
	
	
	
  	
   
    return 0;
}