#include<stdio.h>

int main()
{
    int num ;
    printf("Enter number : ");
    scanf("%d",&num);
    int n ; 
    printf("Enter nth bit to check(0-31) : ");
    scanf("%d",&n);
    
    if(num&1<<n) printf("The %d bit is set to 1",n);
    else printf("The %d bit is set to 0",n);
}