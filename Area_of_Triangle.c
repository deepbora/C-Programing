#include<stdio.h>
#include<math.h>

int main()
{
    float a, b ,c ,s,at;
    printf("\nEnter the three sides:\n");
    scanf("%f %f %f", &a ,&b, &c);
    
    s=(a+b+c)/2;
    printf("%f",s);
    // at=sqrt(s*(s-a)*(s-b)*(s-c));

    // printf("\n%6.2f area of triangle:",at);
    
    return 0;

}