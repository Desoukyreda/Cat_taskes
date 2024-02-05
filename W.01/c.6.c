# include<stdio.h>
int main()
{
    int n1 ,n2 ;
    printf("enter the number 1 : ");
    scanf("%d",&n1);
    printf("enter the number 2 : ");
    scanf("%d",&n2);
    printf("\nthe arithmetical operation : \n");
    printf("%d + %d = %d \n%d - %d = %d \n%d * %d = %d \n%d / %d = %d\n%d %% %d = %d\n",n1,n2,n1+n2,n1,n2,n1-n2,n1,n2,n1*n2,n1,n2,n1/n2,n1,n2,n1%n2);
    printf("\nthe logical operation : \n");
    printf("%d && %d = %d \n%d || %d = %d\n!%d = %d \n",n1,n2,n1&&n2,n1,n2,n1||n2,n1,!n1);
    printf("\nthe bitwise operation : ");
    printf("%d & %d = %d\n%d | %d = %d\n~%d = %d\n%d ^ %d = %d\n",n1,n2,n1&n2,n1,n2,n1|n2,n1,~n1);

}
