#include<stdio.h>

int main()
{
    char op ;
    int i =3;
    do{
         
    printf("enter operator (+,-,*,/) : ");
    scanf("%c",&op);
    getchar();
    if(op!='+' && op!='-'&&op!='/' && op!='*')
    printf("Wrong operation :(....., Try AGAIN \n");
    else break;
    }while(i--);
   
    float a ,b ;
    printf("enter two numbers : ");
    scanf("%f%f",&a,&b);
    
    switch(op)
    {
        case '+' :
        printf("%f + %f = %f \n",a,b,a+b);
        break;
        case '-' :
        printf("%f - %f = %f \n",a,b,a-b);
        break;
        case '*':
        printf("%f * %f = %f \n",a,b,a*b);
        break;
        case '/':
        if(b==0)printf("Mathmatical error :(\n");
        else
        printf("%f / %f = %f \n",a,b,a/b);
        break;
        default :
        printf("Wrong operation :(\n");
    }
    return 0;
}