#include <stdio.h>
#include "NumClass.h"
int reverse(int n)
{
   int sum=0;
   while (n!=0)
   {
     sum = sum*10 + n%10;
     n /= 10;
   }
   return sum;
}
int removeLastAndFirst(int n)
{
    n=n/10;
    n=reverse(n);
    n=n/10;
    n=reverse(n);
    return n;
}
int firstDig(int n)
{
    int a=reverse(n);
    return a/10;
}
int isPalindrome(int n)
{
    if (n<10)
    {
        return 1;
    }
    if (n/10!=firstDig(n))
    {
        return 0;
    }
    return isPalindrome(removeLastAndFirst(n));
}
int power(int num,int power)
{ int temp=num;
for (int i = 0; i < power-1; i++)
{
    num=num*temp;
}
return num;
}
int ArmStrongHelpFunction(int num, int numOfDig)
{
    int base= num%10;
    if(num==0)
    return 0;
  return power(base,numOfDig)+ArmStrongHelpFunction(num/10,numOfDig);
}
int isArmstrong(int num)
{
    if (num<=0)
    {
        if(num==0)
        return 1;
    
    else return 0;
    }
    int numOfDig=0;
    int temp=num;
    while (temp>0)
    {
        temp=temp/10;
        numOfDig+=1;
    }
    return ArmStrongHelpFunction(num,numOfDig)==num;
    
}


