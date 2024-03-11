//modular program to find the distance btw 2 numbers//
#include<stdio.h>
#include<math.h>
float distance(float x1,float x2,float y1,float y2)
    {
       float d;
       d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
       return d;
    }

 int main()

    {
       float x1,x2,y1,y2,d;
       printf("enter x1,x2,y1,y2\n");
       scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
         d=distance(x1,x2,y1,y2);
       printf("d=%f",distance);
       return 0;

    }
