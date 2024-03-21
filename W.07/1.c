#include<stdio.h>
#include<stdlib.h>

typedef struct 
{
    char *name;
    double salary;
    float bonus;
    float deduction;
}Empolyee;

int main(void)
{
  Empolyee emp[3];
  emp[0].name ="Mohsen";
  emp[1].name ="Mariam";
  emp[2].name ="Maged";
 
 double total_value = 0;
  for (size_t i = 0 ; i < 3; i++)
  {
    printf("Enter the info for %s : \n",emp[i].name);
    printf("Salary : ");
    scanf("%lf",&emp[i].salary);
    printf("Bonus : ");
    scanf("%f",&emp[i].bonus);
    printf("deduction : ");
    scanf("%f",&emp[i].deduction);
    
    total_value+=(emp[i].salary+emp[i].bonus-emp[i].deduction);

    printf("\n----------------------------\n");
  }
  
  printf("\nTotal value : %.2f",total_value);
  return 0;
}