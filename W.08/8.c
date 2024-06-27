#include<stdio.h>
int max(int a , int b)
{

    return a>b? a : b ;
} 
int min(int a , int b)
{

    return a<b? a : b ;
} 
int arr[100];
int res[2];
int * fun()
{
    int n ; 
    printf("ENTER size of array : ");
    scanf("%d",&n);
    printf("enter %d element in array : \n",n);
    int mn = 1e8,mx = -1e8;
    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",arr+i);
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    res[0]= mx;
    res[1] = mn;
    return res ;
}
int main()
{
int * ptr = fun();
printf("Max num : %d\n",ptr[0]);
printf("Min num : %d\n",ptr[1]);
return 0 ;
}