#include <stdio.h>
int sum_alternate(int n)
{
   int i=1,sum=0,num,sign=1;
   while(i<=n)
    {

      sum=sum+(i*sign);
      sign=sign*-1;
      printf("%d/t",sum);
      i=i+2;

    }
  return sum;
}
int main()

{
int n,sum;
printf("Enter n\n");
scanf("%d",&n);
sum=sum_alternate(n);
return 0;
}
