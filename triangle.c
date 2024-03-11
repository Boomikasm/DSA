//if three sides of triangle are entered through the keyboard,write a program to check whether the triangle is isosceles,equi,scalene or right angled triangle//
#include<stdio.h>
int main() {
   float side1,side2,side3;
   printf("Enter sides\n");
   scanf("%f%f%f",&side1,&side2,&side3);

if(side1==side2&&side2==side3&&side1==side3)
    printf("equi");
else if ((side1!=side2)&&(side2==side3))
    printf("isosceles");
else if (side1!=side2!=side3)
    printf("scalene");
else
   printf("invalid");
return 0;
    }
