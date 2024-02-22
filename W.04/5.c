#include<stdio.h>

int main()
{
    int arr[5][5];
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            printf("arr[%d][%d] = ",i+1,j+1);
        scanf("%d",&arr[i][j]);
        }
    }
    long row_sum[5]={0},column_sum[5]={0};
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            row_sum[i]+=arr[i][j];
            column_sum[i]+=arr[j][i];
        }
    }
    printf("\nRow Total : \n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%ld ",row_sum[i]);
    }
    printf("\n\nColumns Totals : \n");
    for (size_t i = 0; i < 5; i++)
    {
        printf("%ld ",column_sum[i]);
    }
}