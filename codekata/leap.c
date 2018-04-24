#include <stdio.h>
 
int main()
{
  int year;
 
   scanf("%d", &year);
 
  if ( year%400 == 0)
    printf("%d\n", year);
  else if ( year%100 == 0) 
  printf("%d\n", year);
  else if ( year%4 == 0 )
    printf("%d\n" year);
  else 
    printf("%d\n", year);  
 
  return 0;
}
