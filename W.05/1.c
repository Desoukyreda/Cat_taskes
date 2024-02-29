#include<stdio.h>
int main(void)
{
    int num = 10;
    printf("Number before accessing : %d\n",num);
    int *ptr = &num;
    *ptr = 20;
    printf("Number after accessing : %d",num);
    return 0 ;
}