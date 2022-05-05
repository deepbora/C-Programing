#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];

char st[20]="raj";

char s[10];

// char a[1][1]={"deep","raj"};

printf("enter the name");
 scanf("%s",&name);//method 1
 printf("%s",name);//method 1


for (int i = 0; st[i] !='\0'; i++)
{
    printf("%c",st[i]);//method--2
}
printf("Enter the number:");///method 3----including space
gets(st);
puts(st);

fgets(st,100,stdin);//method-4- including space--
puts(st);


    return 0;
}