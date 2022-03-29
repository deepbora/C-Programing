#include<stdio.h>


int main()
{
     int x[3][4]={{1,2,3,1},
                 {4,5,6,1},
                 {7,8,9,1}};


    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 4; j++)
        {
        //   printf("%d %darrya is%d\n",i,j,x[i][j]);
        printf("%d  ",x[i][j]);
        }
        printf("\n");
        
        /* code */
    }
    


    return 0;
}