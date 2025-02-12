#include <stdio.h>
#include "NumClass.h"

int power(int num,int power)
{ int temp=num;
for (int i = 0; i < power-1; i++)
{
    num=num*temp;
}
return num;
}
int isArmstrong(int num)
{
    int temp1=num ,temp2=num,n=0,sum=0;
    while (temp1!=0)
    {
        temp1=temp1/10;
        n=n+1;
    }
    while (temp2!=0)
    {
        sum=sum+power(temp2%10,n);
        temp2=temp2/10;
    }
    if (num==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
} 
int isPalindrome(int num)
{
    int temp = num;
    int digit, revNumber;
    revNumber = 0;
    while (num > 0) {
        digit = num % 10;
        revNumber = (revNumber * 10) + digit;
        num /= 10;
    }
    if (revNumber == temp)
        return 1; 
    else
        return 0;
}


     



