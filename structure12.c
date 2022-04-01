#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    int tol;

};
struct student x;


int main()
{
    int n;
label :
    printf("Enter the roll name and total marks\n");
    scanf("%d %s %d",&x.roll,&x.name,&x.tol);
    printf("\n\tdetaitls entered are\n");
    printf("\troll nUmber:%d\n",x.roll);
    printf("\tName :%s\n",x.name);
    printf("\tTotal Marks:%d\n",x.tol);
    printf("press 1 key to continne...0 to exit..\n");
    printf("%d",&n);

    if (n==1)
    {
        goto label;
    }else{
        goto end;
    }
    

end:
printf("BYE");

return 0;


}
 

