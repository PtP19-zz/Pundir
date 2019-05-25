#include <stdio.h>

int main()
{
    int arm,a,b,c,t;
    scanf("%d",&arm);
        a=arm/100;
        b=((arm/10)%10);
        c=arm%10;
        t=a*a*a + b*b*b + c*c*c;
        
     if(t==arm)   
     {
         printf("Armstrong Number");
     }else
     {
         printf("Not a Armstrong Number");
     }
    
    return 0;
}
