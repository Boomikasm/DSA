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
   printf("%d",a[i][j]);

   }
   printf("\n");
  }
 return;
}
int find_sum(int a[5][5], int row,int cols)
{

  int sum=0;
 int i,j;

 for(i=0;i<row;i++)
  {
  for(j=0;j<cols;j++)
   {
     sum=sum+a[i][j];
   }
  }
  return sum;
}
void row_sum(int a[5][5], int row,int cols)
{

  int sum=0;
 int i,j;

 for(i=0;i<row;i++)
  {sum=0;
  for(j=0;j<cols;j++)
   {
     sum=sum+a[i][j];
   }
   printf("the sum of %d row=%d\n",i+1,sum);
  }
  return ;
}

void col_sum(int a[5][5], int row,int cols)
{

  int sum=0;
 int i,j;
for(j=0;j<cols;j++)

  {sum=0;
   for(i=0;i<row;i++)
   {
     sum=sum+a[i][j];
   }
   printf("the sum of %d col=%d\n",j+1,sum);
  }
  return;

}


int diagonal_sum(int a[5][5], int row,int cols)
{

  int sum=0;
 int i,j;
for(i=0;i<row;i++)
{
       sum=sum+a[i][i];
}
printf("sum of diagonal elements=%d\n",sum);
return;
}

void tri_sum(int a[5][5], int row,int cols)
{

  int usum=0;
  int lsum=0;
  int sum=0;
  int i,j;
  for(i=0;i<row;i++)
  {
    for(j=0;j<cols;j++)
   {  if (i==j)
      sum=sum+a[i][j];

       else if(i<j)
       usum=usum+a[i][j];
       else
        lsum=lsum+a[i][j];
}
  }
  printf("sum of upper triangle is = %d\n",usum);
  printf("sum of lower triangle is = %d\n",lsum);
  }


int main()
{
 int a[5][5],row,cols,s,r_s;
 printf("enter row and column size\n");
 scanf("%d%d",&row,&cols);
 printf("Enter elements of row,cols\n");
 read(a,row,cols);
 display(a,row,cols);
 s=find_sum(a,row,cols);
 row_sum(a,row,cols);
 col_sum(a,row,cols);
 diagonal_sum(a,row,cols);
 tri_sum(a,row,cols);
 printf("The sum is %d",s);
 return 0;

}
