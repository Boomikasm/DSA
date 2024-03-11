#include<stdio.h>
int main()
{
  int arr[5],i;
  int arr1[5];
  printf("enter matrix elements\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr[i]);
  }
for(i=0;i<5;i++)
  {
    scanf("%d",&arr1[i]);
  }
for(i=0;i<5;i++)
  {
    printf("%d",arr[i]+arr1[i]);
  }

}
