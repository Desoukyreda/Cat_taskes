#include<stdio.h>

char str_cpy[100];
int main()
{
    char *str = "hello" ;
    size_t i = 0;
    for (; str[i]!='\0'; i++)
    {
       str_cpy[i] = str[i]; 
    }
    str_cpy[i] = '\0';
    printf("Original string : %s\nCopied string : %s\n",str,str_cpy);
}