#include<stdio.h>

int main()
{
    int num =0 ;
    printf("Enter the result of 3 x 4 : ");
    while(1)
    { 
        scanf("%d",&num);
        if(num == 3*4) {printf("Thanks"); break;}
        else printf("Try again : ");
    }
    return 0 ;
}