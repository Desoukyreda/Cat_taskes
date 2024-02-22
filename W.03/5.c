#include <stdio.h>

long fibonacci(int n)
{
  if(n>1) return fibonacci(n-1)+fibonacci(n-2);
  else if(n==1) return 1 ;
  else return 0 ;
}
int main()
{                                       //this code don't run in large number because time of recursion !!
    int num = 0 ;                       //can use prefix array to calculate fibonacci with less time .
    printf("Enter the number : ");
    scanf("%d",&num);
    long result = fibonacci(num);
    printf("tne fibonacci of number : %ld",result);
}
