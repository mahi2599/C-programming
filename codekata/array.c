#include <stdio.h>

int main()
{
   int n,k,s=0,a[30];
   scanf("%d%d",&n,&k);
   for(int i=0;i<n;i++)
        scanf("%d\t",&a[i]);
    for(int i=0;i<k;i++)
        s=s+i;
    return 0;
}
