#include<stdio.h>

struct student
{
    int roll;
    char name[20];
    int tol;

};
struct student x[20];


int main()
{
    int n,temp,flag;
    char ch='y';

    printf("how many students :");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the Roll Number: \n");
        scanf("%d",&x[i].roll);
        printf("Enter the Name:\n");
        scanf("%s",&x[i].name);
        printf("Enter the total marks:\n");
        scanf("%d",&x[i].tol);
    }

    while (ch=='y' || ch=='Y')
    {
        printf("Enter student roll number to display marks :");
        scanf("%d",&temp);
        flag=0;
        for (int i = 0; i < n && flag==0; i++)
        {
            if(x[i].roll==temp){
                printf("the markrs obtain bt %d %s\n",x[i].roll,x[i].name);
                printf("the total marks :%d\n",x[i].tol);
                flag=1;
                
                
            }
            if (flag==0)
            {
                printf("Not present in the list%d\n ",temp);
            }
                break;

            
        }
        
        
    }
    



    return 0;
    


}