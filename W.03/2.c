#include<stdio.h>
int a = 15;
int b = 6;
void fun()
{
    int swap = a ;
    a = b;
    b = swap ;
}
int main()
{
  printf("the numbers before swaping :{%d , %d}\n",a,b);
  fun();
  printf("the numbers after swaping :{%d , %d}",a,b);
}