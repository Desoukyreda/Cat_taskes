# include<stdio.h>
int main()
{
   double N_hour =0 , e_salary = 0;
   printf("enter the working hour : ");
   scanf("%lf",&N_hour);
  e_salary = N_hour * 50 ; 
   if(N_hour<40)
   e_salary-=.1 * e_salary;
   printf("the employee salary in a week : %.02lf $",e_salary);
   return 0 ;
}