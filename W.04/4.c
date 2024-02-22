#include<stdio.h>

void fun(int arr[],int n ,int repeat[])
{
    int freq[10000]={0};
    for (size_t i = 0; i < n; i++)
    {
        printf("arr[%d] = ",i+1);
        scanf("%ld",&arr[i]);
        freq[arr[i]]++;
        if(freq[arr[i]]>1)repeat[i] = arr[i];
    }

}

int main()
{
    printf("Enter number of element : ");
    int n ; scanf("%d",&n);
    int arr[100]; 
    int repeat_element[100]={0};
    fun(arr,n,repeat_element);

    printf("the repeating elememnt : ");
   for (size_t i = 0; i < n; i++)
   {
     if(repeat_element[i]>0)
     printf("%d ",repeat_element[i]);
   }
   
}