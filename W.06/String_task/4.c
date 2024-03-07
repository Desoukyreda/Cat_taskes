#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100]={0};
    printf("Enter string : ");
    fgets(str,100,stdin);
    char c =0 ,position = 0;
    printf("enter the char : ");
    scanf("%c",&c);
    for (size_t i = 0; i < strlen(str)-1; i++)
    {
        if(str[i]==c){
            position = i ;
            break;
        }
    }
    printf("\'%c\' is found at index %d",c,position);
}