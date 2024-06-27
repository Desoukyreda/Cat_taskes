#include<stdio.h>

int main()
{
    int num ; 
    printf("enter number : ");
    scanf("%d",&num);
    int sum = 0;
    while (num!=0)
    {
      sum+= num%10;
      num/=10;
    }
    printf("sum of digits : %d",sum);
    return 0;
}