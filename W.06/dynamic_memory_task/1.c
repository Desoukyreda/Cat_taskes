#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n ;
  printf("enter the number of subject you want to add marks : ");
  scanf("%d",&n);
  int *ptr=(int *)malloc(n*sizeof(int));
  printf("enter the marks of %d subjects : \n",n);
  for (size_t i = 0; i < n; i++)
  {
     printf("sub[%d]= ",i+1);
     scanf("%d",&ptr[i]);
  }
  int check = 0 ;
  do
  {
    
   printf("do you want to add new subject enter 1 for add or 0 for exit : ");
   scanf("%d",&check);
   if(check)
   {
    int num=0;
     printf("enter the number of subject you need to add : ");
     scanf("%d",&num);
     
     ptr = (int *)realloc(ptr,(n+num)*sizeof(int));

     printf("enter the marks of %d subjects : \n",num);
  for (size_t i = n; i < n+num; i++)
  {
     printf("sub[%d]= ",i+1);
     scanf("%d",&ptr[i]);
  }
    n+=num;
   }
  } while (check);
  
  printf("\nthe marks of subject : \n");
  for (size_t i = 0; i < n; i++)
  {
    printf("sub[%d]= %d\n",i+1,ptr[i]);
  }
  free(ptr);
  return 0 ;
}