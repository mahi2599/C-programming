#include<stdio.h>
#include<ctype.h>
int main()
{
  char c;
  scanf("%c",&c);
  if(isalpha(c))
        printf("is a alphabet");
  else
      printf("Not a alphabet");

  return 0;  
}
