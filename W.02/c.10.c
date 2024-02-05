# include <stdio.h>

int main()
{
    int id ,password;
    printf("Enter your id : ");
    scanf("%d",&id);
    printf("Enter your password : ");
    scanf("%d",&password);
    int check_id , check_pass;
    printf("enter your id : ");
    scanf("%d",&check_id);
    if(id!=check_id){printf("wrong ID"); return 0;} 
    else{
        printf("enter your password : ");
        int i = 3 ;
        while (i--)
        {
            scanf("%d",&check_pass);
            
            if(password == check_pass)
            {
                printf("welcome ");
                break;
            }else
            {
                printf("\nYou are not registered \n");
                
                if(i!=0){printf("%d attemping remaining \n",i);
                printf("Try again : ");}
            }
        }
       if(i == -1) printf("no more tries !!");
        
    }

}