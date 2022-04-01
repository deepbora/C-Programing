#include<stdio.h>

struct student
{
    int roll;
    char add[20];

};
struct student deep,raj,geet;




int main()
{
//decleration method 1---

    // deep.roll=1;
    // strcpy( deep.add,"nagaon");
    // raj.roll=2;
    // strcpy(raj.add,"jagiroad");
    geet.roll=3;
    strcpy( geet.add,"raha");
    //decleration method 2---
    struct student deep={1,"nagaon"};
    struct student raj={2,"jagiroad"};
    // struct student deep={1,"nagaon"};





    printf("deep roll is: %d\n",deep.roll);
    printf("deep address is: %s\n",deep.add);
     printf("raj roll is: %d\n",raj.roll);
    printf("raj address is: %s\n",raj.add);
     printf("geet roll is: %d\n",geet.roll);
    printf("geet address is: %s\n",geet.add);

   

    
    return 0;
}