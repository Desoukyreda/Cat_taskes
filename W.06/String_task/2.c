#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char str[100]={0};
    printf("Enter string : ");
    fgets(str,100,stdin);
    
    int Ctr_alpha=0,Ctr_digits=0,Ctr_special=0;
    
    for (size_t i = 0; i < strlen(str)-1; i++)
    {
    str[i] = tolower(str[i]);
    if(str[i]>='a'&&str[i]<='z')Ctr_alpha++;
     else if(str[i]>='0'&&str[i]<='9')Ctr_digits++;
     else if(str[i]!=' ') Ctr_special++;
    }
    printf("Number of alphabets :%d \n",Ctr_alpha);
    printf("Number of digits : %d\n",Ctr_digits);
    printf("Number of special : %d\n",Ctr_special);  // note -> I don't count white spaces :)
    return 0 ;
}