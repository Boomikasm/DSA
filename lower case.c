#include<stdio.h>
int main()
{
  char ch;
  scanf("%c",&ch);
  if(isupper(ch))
  {
     printf("%c",tolower(ch));
  }
  else
  {
      printf("enter upper case charater");
  }
  return 0;
}
