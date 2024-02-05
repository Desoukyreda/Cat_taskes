# include <stdio.h>
# define g grade
int main()
{
    float grade =0 ;
    printf("enter your grade : ");
    scanf("%f",&grade);

    if(g >= 85 && g <=100)
    printf("Excellent");
    else if(g >=80 && g < 85)
    printf("Very Good");
    else if(g >= 65 && g < 80)
    printf("good");
    else if(g >= 50 && g < 65)
    printf("D");
    else if(g < 50 && g >=0)
    printf("Failed");
    else 
    printf("Wrong grade !!");
    return 0; 
}