#include <stdio.h>

long fibonacci(int n)
{
  if(n>1) return fibonacci(n-1)+fibonacci(n-2);
  else if(n==1) return 1 ;
  else return 0 ;
}
int main()
{
    int num = 0 ;
    printf("Enter the number : ");
    scanf("%d",&num);
    long result = fibonacci(num);
    printf("tne fibonacci of number : %ld",result);
}