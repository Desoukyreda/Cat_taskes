#include<stdio.h>

int max(int a , int b)
{
    return a>b? a : b;
}
int min(int a , int b)
{
    return a<b? a : b;
}
int main()
{
    int a = 1 , b = -3 , c = 0 , d =9;
    
    int mx = max(a,max(b,max(c,d))) ;
    int mn = min(a,min(b,min(c,d))) ;

    printf("Max number : %d\n",mx);
    printf("Min number : %d\n",mn);
}