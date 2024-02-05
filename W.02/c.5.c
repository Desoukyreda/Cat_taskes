# include <stdio.h>

int main()
{
    double n1 ,n2 ,n3 , max = 0;
   printf("Enter the three numbers : \n");
   scanf("%lf%lf%lf",&n1,&n2,&n3);
   if( n1 == n2 && n1 == n3 )
   {
    printf("Three number are equal !!");
    return 0 ;
   }
   if(n1 >= n2)
   {
     if(n1 >= n3) max =n1;
     else max = n3;
   } else 
   {
    if(n2 >= n3 ) max =n2 ;
    else max =n3;
   }
   printf("The max number is : %.2lf",max);
   return 0 ;
}