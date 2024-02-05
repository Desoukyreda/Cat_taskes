# include<stdio.h>

int main()
{
    double x , sum=0 ;
    double ave =0 ;
    int i = 0 ;
    while(i++ < 10)
    {
        printf("enter the %d number : ");
        scanf("%lf",&x);
        sum+=x;
    }
    ave = sum / 10;
    printf("the sum = %.2lf\n",sum);
    printf("thhe average = %.2lf\n",ave);
}