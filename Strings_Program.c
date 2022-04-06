#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	/*print strings  
    1.single charecter
    2.a strings
    3.a line of strings*/
    char ch;
    char s[20];
    char str[100];
    scanf("%c",&ch);
    scanf("%s\n",s);//--->\n is medetory for the next print line
    scanf("%[^\n]s",str);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",str);



   
    return 0;
}