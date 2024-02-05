# include <stdio.h>

int main()
{
    int num ;
    printf("enter the number : ");
    scanf("%d",&num);
    for (size_t i = 1; i <= num ; i++)
    { int j =i ;
        while(j--)
        {
            printf(". ");
        }
        printf("%d * %d = %d\n",i,num,i*num);
    }
    
}