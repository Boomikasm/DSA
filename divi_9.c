// A mathematics teacher would like his/her students to check whether a given integer number is divisible by 9 or not.
//He told students that an integer N is divisible by 9 if the sum of its digits is divisible by 9.
//Apply PSF to display each digit, starting with the rightmost digit and to check whether or not the number is divisible by 9.
//Hint: Use the % operator to get each digit; then use / to remove that digit. So 154368 % 10 gives 8 and 154368 / 10 gives 15436.
 //The next digit extracted should be 6, then 3 and so on//
#include<stdio.h>

int isDivisible(int);           //function prototype

int main()
{

    int num;
    printf("enter the number");
    scanf("%d",&num);
    int res = isDivisible(num);         //function call
    if(res==1)
        {
            printf("Divisible By 9");
        }
    else
        printf("Not Divisible By 9");

}

int isDivisible(int n)          //function definition
{
     int sum = 0;
     int temp=a;

    while (n!=0)
        {
        int k = n% 10;
        sum=sum+k;
        n=n/10;
    }
    if(sum%9 ==0)
        return 1;
    else
        return 0;
}
