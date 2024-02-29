#include<stdio.h>

void multiply(int arr_1[2][3],int arr_2[3][2],int multi[2][2])
{
  for (size_t i = 0; i <2 ; i++)
  {
    for (size_t j = 0; j < 2; j++)
    {
        for (size_t k = 0; k < 3; k++)
        {
             multi[i][j]+=arr_1[j][k]*arr_2[k][j];
        } 
    }
    
  }
  
}
int main()
{
    int arr_1[2][3]={{2,3,4},{5,1,2}},arr_2[3][2]={{0,1},{-1,3},{4,2}},multi_arr[2][2]={0};

 multiply(arr_1,arr_2,multi_arr);
printf("the result array: \n");
  for (size_t i = 0; i < 2; i++)
  {
    for (size_t j = 0; j < 2; j++)
    {
        printf("%d ",multi_arr[i][j]);
    }
    printf("\n");
  }
  

}