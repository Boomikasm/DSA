#include<stdio.h>
int main()
{ int i;
  char ch;
  do
  {
  printf("\n\nenter 1 for lower case and 2 for upper case\n");
  scanf("%d",&i);
  if(i==1)
  {

      for(ch='a';ch<='z';ch++)
  {
     printf("%c ",ch);

  }
  }

  else if(i==2)
   {
      for(ch='A';ch<='Z';ch++)
  {
     printf("%c ",ch);
  }
  }

  else
  {

      printf("invalid entry");
  }
  }while(i!=0);
return 0;
}


