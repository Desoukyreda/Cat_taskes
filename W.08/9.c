#include<stdio.h>
#include<string.h>
#include<math.h>
char str[32];
int main()
{
    printf("Enter binary number : ");
    scanf("%s",str);

    int num  =0;
    for (int i = strlen(str)-1,j =0; i >=0; i--,j++)
    {
        if(str[i]=='1')
        num+=pow(2,j);
    }
    printf("Number is : %d in decimal \n",num);
    return 0;
}