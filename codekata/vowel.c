#include<stdio.h>
#include<ctype.h>
int main()
{
  char c;
  scanf("%c",&c);
  c=toupper(c);
  if(isalpha(c))
  {
    if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
      printf("vowel");
    else
      printf("constant");

  }
  else
  {
    printf("invalid character");
  }
return 0;  
}
