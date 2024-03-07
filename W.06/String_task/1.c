#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[100]={0};
    printf("Enter string : ");
    fgets(str,100,stdin);

    for (size_t i = 0; i<strlen(str); i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]-=32;
        }
    }
     printf("String after convert : %s",str);
     return 0;
}