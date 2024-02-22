#include<stdio.h>
#include<stdbool.h>

int main()
{
    printf("Enter number of element : ");
    int n ; scanf("%d",&n);
    double arr[100];
    for (size_t i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i+1);
        scanf("%lf",&arr[i]);
    }
    int x ;
    printf("Enter 0 for ascending or Enter 1 for descending : ");
    scanf("%d",&x);
    if(x==1)
    {
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-1-i; j++)
        {
           
            // 5 4 3 2 1 
           if(arr[j+1]<arr[j]) 
           {
             double swap = arr[j];            
            arr[j]=arr[j+1];
            arr[j+1]=swap;
           }
        } 
    }
    for (size_t i = 0; i < n; i++)printf("%.2lf ",arr[i]);
    }
    else if(x==0)
    {
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-i-1; j++)
        {
           
            // 5 4 3 2 1 
           if(arr[j+1]>arr[j]) 
           {  
            double swap = arr[j];             
            arr[j]=arr[j+1];
            arr[j+1]=swap;
           }
        } 
    }
    
    for (size_t i = 0; i < n; i++)printf("%.2lf ",arr[i]);
    }else printf("Worng number ,enter correct number (0,1)");
    return 0 ;
}