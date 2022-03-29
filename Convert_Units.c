#include <stdio.h>

#define ml 0.621371
#define foot 0.0833
#define meter 0.01
#define kg 0.454
#define cms 100

int main()
{

    int num, d,x, n,y;
    // char d;

    printf("\t\t\t*******convter units******\n");
    printf("press 1 for convert km to mailes\n");
    printf("press 2 for convert inces to foot\n");
    printf("press 3 for convert cms to meter\n");
    printf("press 4 for convert pund to kg\n");
    printf("press 5 for convert inces to meter\n");
    printf("press 6 for convert meter to cms\n");
    scanf("%d", &num);

    label:

    switch (num)
    {
    case 1:
        printf("Enter the number\n");
        scanf("%d", &x);
        printf("the %d km is %f miles\n", x, x * ml);

        break;
    case 2:
        printf("Enter the number");
        scanf("%d", &x);
        printf("the %d inces is %f foot\n", x, x * foot);

        break;
    case 3:
        printf("Enter the number");
        scanf("%d", &x);
        printf("the %d cms is %f mmeter\n", x, x *meter);

        break;
    case 4:
        printf("Enter the number");
        scanf("%d", &x);
        printf("the %d pund is %f kg\n", x, x * kg);

        break;
    case 5:
        printf("Enter the number");
        scanf("%d", &x);
        printf("the %d inces is %f meter\n", x, x * meter);

        break;
    case 6:
        printf("Enter the number");
        scanf("%d", &x);
        printf("the %d meter is %d cm\n", x, x*cms);

        break;

    default:
        break;
    }
    printf("press 1 to continue 0 to exit\n");
    scanf("%d",&d);
    if(d==1){
        goto label;
    }else{
        goto end;
    }
end: printf("thankQ");
    return 0;
}