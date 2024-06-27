#include<stdio.h>

int main()
{
    long  num ; 
    printf("enter number : ");
    scanf("%d",&num);
    int pow ; 
    printf("enter power : ");
    scanf("%d",&pow);
    long rep = num ;
    pow--;
    while (pow--)
    {
    num*=rep ;
    }
    printf("the result = %ld ",num);
    return 0 ;
}