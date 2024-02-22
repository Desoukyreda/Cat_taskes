#include<stdio.h>
double scan(int i)
{
    double num =0;
  printf("Enter the number %d :",i);
  scanf("%lf",&num);
  return num;
}
double max(double n1 , double n2)
{
    if(n1 == n2)return 0 ;
  if(n1 > n2)return n1;
  else return n2 ;
}

int main()
{
    double num1 =0 , num2 =0 , m ;
    num1 = scan(1);
    num2 = scan(2);
    m =max(num1,num2)
    if(m)printf("the max number : %.03lf",m);
    else printf("the numbers are equal");
}
