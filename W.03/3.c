#include<stdio.h>

int num_digits(int n)
{
    static int ctr = 0;
  if(n!=0){ ctr++;
    return num_digits(n/10);}
    else return ctr ;
}
int main()
{
    int num = 0 ;
    printf("enter the number : ");
    scanf("%d",&num);
    int ctr = num_digits(num);
    printf("the number of digits : %d",ctr);
}