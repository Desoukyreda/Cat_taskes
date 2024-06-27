#include<stdio.h>

int main()
{
    printf("ENTER A YEAR : ");
     int year; scanf("%d",&year);
   
     if(!(year%4) && year%100)
     {
        printf("\nLeap Year \n");
     }else printf("Not Leap Year \n");
     return 0;
}