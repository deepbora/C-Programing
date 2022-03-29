#include<stdio.h>

int main(){

    int bnum,pbill,cbill,unit;
    float ec;
    printf("Enter youre bill number:\n");
    scanf("%d",&bnum);
    printf("Enter youre previous bill reading:\n");
    scanf("%d",&pbill);
    printf("Enter youre new bill reading:\n");
    scanf("%d",&cbill);
    unit=cbill-pbill;
    ec=unit*1.50;
    printf("%d\n",bnum);
    printf("%d\n",unit);
    printf("%f\n",ec);

    return 0;
    
    
}