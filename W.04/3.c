#include<stdio.h>

int main()
{
    printf("Enter number of element : ");
    int n ; scanf("%d",&n);
    long arr[100];
    int freq[10000]={0};
    for (size_t i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i+1);
        scanf("%ld",&arr[i]);
        freq[arr[i]]++;
    }
    printf("Unique Elements in the given array  : ");
  for (size_t i = 0; i < n; i++)
  {
    if(freq[arr[i]]==0)continue;
    printf("%ld ",arr[i]);
    freq[arr[i]]=0;
  }
  return 0 ;
}