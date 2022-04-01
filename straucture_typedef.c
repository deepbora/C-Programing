#include<stdio.h>

struct student//--->userdefine datatypes
{
    int id;
};
typedef struct student std;

int main()
{

    // struct student s1,s2;
    std s1, s2;//----> typedef
    s1.id=10;
    printf("%d",s1.id);
   
    
    return 0;
}