#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    float x, y;

    printf("enter x ane n:\n");
    scanf("%f %d",&x,&n);

    switch (n)
        {
        case 1:
            y = 1 + x;
            printf("%f",y);

            /* code */
            break;
        case 2: y=1+x/n;
        printf("%f",y);
        break;
        case 3: y=1+pow(x,n);
        printf("%f",y);
        break;
        default:printf("worng");77
            break;
        }

        return 0;
}