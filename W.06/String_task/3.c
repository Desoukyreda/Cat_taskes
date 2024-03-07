#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char str[100]={0};
    printf("Enter string : ");
   fgets(str,100,stdin);
    int n = strlen(str)-1;
    char s[n+1];
    s[n]='\0';
    for (size_t i =n-1; i!=-1; i--)
    {
        s[n-i-1] = str[i];
    }
   printf("\nThe string after reverseing : %s",s);
}