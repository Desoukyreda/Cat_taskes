#include<stdio.h>
#define number_of_digit 32

int main()
{
    printf("Enter the number : ");
    int num ; scanf("%d",&num);   // Assume number is integer 
    int one_ctr = 0;
    while(num!=0)
    {
      num = num &(num-1);
      one_ctr++;
    }
    printf("Number of ones : %d\n",one_ctr);
    printf("Number of zeros : %d\n",number_of_digit - one_ctr);
    return 0;
}