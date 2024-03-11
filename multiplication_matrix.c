#include<stdio.h>

void read(int a[5][5], int row ,int cols)
{
 int i,j;
 for(i=0;i<row;i++)
  {
  for(j=0;j<cols;j++)
   {
   scanf("%d",&a[i][j]);
   }
  }
 return;
}
void display(int a[5][5], int row,int cols)
{
 int i,j;

 for(i=0;i<row;i++)
  {
  for(j=0;j<cols;j++)
   {
   printf("%5d",a[i][j]);

   }
   printf("\n");

  }
  return;
}


 int main()
 {
    int a[5][5],b[5][5],result[5][5];
    int i,j,r1,c1,r2,c2,even;
    int sum,k;
    // 1st matrix//
    printf("enter number of rows and col of matrix a: ");
    scanf("%d%d",&r1,&c1);
    printf("Enter elements of row,cols\n");
      read(a,r1,c1);
      display(a,r1,c1);
   // 2nd matrix//
    printf("enter number of rows and cols of matrix b: ");
    scanf("%d%d",&r2,&c2);
    printf("Enter elements of row,cols\n");
      read(b,r2,c2);
      display(b,r2,c2);
    // multiplication of matrix //
    if(r1==c2)
    {
       for(i=0;i<r1;i++)
       {
         for(j=0;j<c2;j++)
        { sum=0;
          for(k=0;k<r1;k++)
          {
            sum+=(a[i][k]*b[k][j]);
          }
            result[i][j]=sum;
        }
      }
    printf("\n matrix after multiplication:\n");
    display(result,r1,c2);
    for(i=0;i<r1;i++)
  {
  for(j=0;j<c2;j++)
  {
      if(result[i][j]%2==0)
      printf("the even elements are %d",result[i][j]);
  }
  printf("\n");
  }

  }

     else
    printf("multiplication is not possible");
    return 0;

    }
