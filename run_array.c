//program to demonstrate run time initialization of array//
  #include<stdio.h>

  void read_print(int n)

    {
       int x[n];
       int i;
       printf("enter the elements of array\n");
       for(i=0;i<n;i++)
          scanf("%d",&x[i]);

       for(i=0;i<n;i++)
          printf("%3d",x[i]);
    }
  int main()
    {
       int n;
       printf("enter the limit\n");
       scanf("%d",&n);
       read_print(n);
       return 0;

    }
