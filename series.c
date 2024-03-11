#include<stdio.h>
void series(int n)
 {
     int cont=1,c;
     int f=0;
     int s=1;
     while(cont<=n)
     {
         c=f+s;
         printf("%3d",c);
         f=s;
         s=c;
         cont++;
     }
return;
 }

 int main()
  {
      int n;
      printf("Enter n\n");
      scanf("%d",&n);
      series(n);
      return 0;

  }
