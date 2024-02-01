# include<stdio.h>
int main()
{
    double amount ;
    printf("enter an amount : ");
    scanf("%lf",&amount);
    printf("the amount with tax : %.03lf",amount+.05*amount);
}