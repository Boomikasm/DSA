#include<stdio.h>
int main()
{
  int a,b,y,cal;
  scanf("%d%d",&a,&b);
  printf("1->add 2->sub 3->multiply  4->divide \n");
  scanf("%d",&cal);
  switch(cal)
    {

    case 1:y=a+b;
           printf("%d",y);
           break;

    case 2:y=a-b;
           printf("%d",y);
           break;

    case 3:y=a*b;
           printf("%d",y);
           break;

    case 4:y=a/b;
           printf("%d",y);
           break;

  }
  return 0;


}
