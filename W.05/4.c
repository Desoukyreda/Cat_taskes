#include<stdio.h>
void bubble_sort(int *ptr,int n)
{
    for (size_t i = 0; i < n-1; i++)
    {
        for (size_t j = 0; j < n-1-i; j++)
        {
           
            // 5 4 3 2 1 
           if(ptr[j+1]<ptr[j]) 
           {
             double swap = ptr[j];            
            ptr[j]=ptr[j+1];
            ptr[j+1]=swap;
           }
        } 
    }
}
int main()
{
  int arr[6]={6,5,4,3,2,1};
  bubble_sort(arr,6);
  printf("the sorted array : \n");
  for (size_t i = 0; i < 6; i++)
  {
    printf("%d ",arr[i]);
  }
  
}