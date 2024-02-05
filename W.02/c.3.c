# include<stdio.h>

int main()
{
    int ID = 0 ;
    printf("Enter thr id : ");
    scanf("%d",&ID);
    switch (ID)
    {
    case 1234:
        printf("Hello \"Harry\"");
        break;
        case 5678:
        printf("Hello \"Ron\"");
        break;
        case 1145:
        printf("Hello \"Hermione\"");
        break;
    default:
    printf("Wrong ID ");
        break;
    }
    return 0 ;
}