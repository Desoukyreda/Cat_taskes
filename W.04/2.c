#include<stdio.h>

int main(void)
{
    printf("Enter number of element : ");
int n ; scanf("%d",&n);
double arr[1000];
for (size_t i = 0; i < n; i++)
{
    printf("arr[%d] = ",i+1);
        scanf("%lf",&arr[i]);
}
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
    printf("the second largest element : %.2lf",arr[1]);
}