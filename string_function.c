#include<stdio.h>
#include<string.h>
int main()
{
    // char str[10];
    // gets(str);
    // puts(str); 
    char st[10]="deep";
    char st2[10]="deep";
    char str[10]="bor";
    char st1[10];

   puts(strcpy(st1,st));
   puts(strcat(st,str));//concatinate

   puts(st1);
   int len=strlen(st1);
   printf("%d\n",len);
   puts(strrev(st1));
   puts(strupr(st1));
   puts(strlwr(st1));

   if(strcmp(st,str)==0){
       printf("equal");

   }else{
       printf("not equal");
   }

//    Hash (key) = 23 % 10 = 3;






    return 0;
}