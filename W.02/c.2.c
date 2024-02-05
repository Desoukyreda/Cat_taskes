# include <stdio.h>

int main()
{
    long num ;
    printf("enter the number : ");
    scanf("%ld",&num);
    if(num & 1)
    printf("the number is \"odd\"");
    else 
    printf("the number is \"even\"");
}