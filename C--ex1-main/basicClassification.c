#include <stdio.h>
#include "NumClass.h"
int factorial(int n)
{
    int fact=1;
    for (int i = 1; i <= n; ++i) {
      fact *= i;
}
return fact;
}
int isPrime(int n)
{
    int flag = 1;
    if(n==1)
    return 1;
    for (int i = 2; i <=n-1; ++i) {
    if (n % i == 0) {
      flag = 0;
      break;
}
    }
    if (flag)
    return 1;
    else return 0;
}
int isStrong(int num) 
{
    int temp=num,sum=0;
    while (temp!=0)
    {
        sum=sum+factorial(temp%10);
        temp=temp/10;
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
