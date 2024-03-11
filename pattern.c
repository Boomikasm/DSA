#include<stdio.h>

int main()
{ int i,row,j;
  scanf("%d",&row);
  for(i=1;i<=row; i++)
  {
     for(j=1;j<=i-1;j++)
     {
        printf("*");

     }
     printf("\n");
  }
   return 0;
}


