#include<stdio.h>
int main()
{
  int arr[5],i;
  int arr1[5];
  int *p=arr;
  int *p1=arr1;
  printf("enter matrix elements\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&p[i]);
  }
for(i=0;i<5;i++)
  {
    scanf("%d",&p1[i]);
  }
for(i=0;i<5;i++)
  {
    printf("%d",i[p]+i[p1]);
  }

}
