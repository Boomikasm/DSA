#include<stdio.h>
int main()
{int i,j,a[3][3],*p,sum;
printf("enter matrix");
for(i=0;i<3;i++)
{for(j=0;j<3;j++)
{  scanf("%d",&a[i][j]);
  }}
 sum=0;
 p=a[0];
for(i=1;i<=3;i++)
{sum=sum+(*p);
 p=p+4;
}
printf("%d",sum);
return 0;
}
