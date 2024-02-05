# include<stdio.h>
int main()
{
    int num , fact =1 ;
    printf("enter the number : ");
    scanf("%d",&num);
    while(num > 1)
    {
      fact*=num;
      num--;
    }
    printf("the factorial = %d",fact);
}