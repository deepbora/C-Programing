#include<stdio.h>
#include <string.h>
int main(){
char str1[10],str2[10];
gets(str1);
gets(str2);
if(strcmp(str1,str2)==0)
printf("Strings :equal");
else
printf("Strings: not equal");
}