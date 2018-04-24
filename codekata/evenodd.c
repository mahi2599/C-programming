#include<stdio.h>

int main()
{
 int n;
 scanf("%d",&n);
 if(1<=n<=100000)
 {
   if(n%2==0)
        printf("Even Number");
   else
        printf("Odd Number");
 }
 else
    printf("invalid Number Should be in limit");
return 0;    
}
 
