#include<stdio.h>
#include<stdlib.h>

int max(int a,int b)
{
    if(a>b)return a;
    else return b;
}

int min(int a,int b)
{
    if(a<b)return a;
    else return b;
}
int main(void)
{
    int n ;
    printf("enter the size of the array : ");
    scanf("%d",&n);
    int *ptr = (int *)calloc(n,sizeof(int));
    for (size_t i = 0; i < n; i++)
    {
        printf("ptr[%d]= ",i+1);
        scanf("%d",(ptr+i));
    }
    
    int max_num = ptr[0];
    int min_num = ptr[0];
    for (size_t i = 0; i < n; i++)
    {
            max_num = max(max_num,ptr[i]);
            min_num = min(min_num,ptr[i]);
    }
    free(ptr);
     printf("\nThe max number : %d\n",max_num);
     printf("\nThe min number : %d\n",min_num);

     return 0 ;
}
