# include<stdio.h>

int main()
{
    int h ;
    printf("enter highest of the pyramid : ");
    scanf("%d",&h);
    for (size_t i = 0; i < h; i++)
    {
        for(int k = h-i-1 ; k>0;k--)printf(" ");
        for(int j = 2*i+1 ; j > 0 ; j--)printf("*");
        printf("\n");
    }
    return 0 ; 
}