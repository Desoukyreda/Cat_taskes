#include<stdio.h>

int arr[100];
int main()
{
    int n ; 
    printf("ENTER size of array : ");
    scanf("%d",&n);
    int ctr_odd = 0;
    printf("enter %d element in array : \n",n);
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
        if(arr[i]&1) ctr_odd++;
    }
    printf("number of odd number : %d\n",ctr_odd);
    printf("number of even number : %d\n",n-ctr_odd);
    return 0 ;
}