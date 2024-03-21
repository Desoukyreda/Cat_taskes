#include<stdio.h>
#include<stdlib.h>


char subjects[4][20] =  {"Programming","Data Structure","Discrete math","Algorithm"};
typedef struct 
{
    int id ;
    int grade;
}student;

int main(void)
{
  student s[10]={ {s[0].id=1234}  ,  {s[1].id=1223}  ,  {s[2].id=2213}  , 
                  {s[3].id=3321}  ,
                  {s[4].id=1212}  ,  {s[5].id=3214}  ,  {s[6].id=4321}  ,             // add ID for students .
                  {s[7].id=2243}  ,  {s[8].id=1423}  ,  {s[9].id=4421}};
  
                {s[0].grade=1,s[1].grade=2,s[2].grade=3,s[3].grade=4,
                 s[4].grade=5,s[5].grade=6,s[6].grade=7,                             // add GRADE for students .
                 s[7].grade=8,s[8].grade=9,s[9].grade=10;}
  
  int check =0;
  printf("Are you admin enter 1 for yes : ");
  scanf("%d",&check);
  if(check==1)
  {
    check =0;
    printf("are you want to change grades for a students enter 1 for yes: ");
    scanf("%d",&check);
    if(check==1)
    {
        for (size_t i = 0; i < 10; i++)
        {
            int g ;
            printf("student[%d] = ",i+1);
            scanf("%d",&g);
            s[i].grade = g ;
        }
    }
  }
  else { 
    int j =0;
   do{
    int ID ;
    printf("enter your ID : ");
    scanf("%d",&ID);
    for (size_t i = 0; i < 10; i++)
    {
       if(s[i].id == ID)
       {
        printf("Your grade is : %d",s[i].grade);
        return 0;
       }
    }
    printf("Wronge ID :(\n");
    j++;
   }while (j<=3);
   printf("\nTry again in another time !");
  }
  return 0 ;
}