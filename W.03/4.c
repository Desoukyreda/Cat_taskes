#include<stdio.h>
#include<string.h>
char Email[100] = "desoukyreda@std.mans.edu.eg";
int password =102030 ;
void login()
{
    int pass ;
    char email[100];
        printf("\n\tWelcome in :)) MILLS ((: page \n");
    printf("----------------------------------------------\n");
    printf("Email :  ");
     fgets(email,28,stdin);
     if(strcmp(email,Email)) printf("\nyour email not found in MILLS , please create new account\n");
    else {printf("Password :  ");
label : scanf("%d",&pass);
    if(pass != password){printf("Wrong password try again : ");
    goto label;}
    else {
        printf("\nHello in MILLS page , changing your future starts here :)\n");
    }
    }
}
int main()
{
  login();
}