#include<stdio.h>
#define scan(n) scanf("%lf",&n)

double sum_number(double *x,double *y)
{
    double sum = *x + *y ;
    return sum ;
}
int main(void)
{
    double num_1 , num_2;
    printf("Enter the first number: ");
    scan(num_1);
    printf("Enter the second number: ");
    scan(num_2);
   double sum =sum_number(&num_1,&num_2);
   printf("The sum of two number : %.2lf",sum);
    
}