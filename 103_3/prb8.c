
#include<stdio.h>
int main(){
    int weekname;
    printf("Enter week number between 1 to 7:");
    scanf("%d",&weekname);
    switch(weekname)
    {
       case 1:
           printf("Saturday");
           break;

        case 2:
           printf("Sunday");
           break;
        case 3:
           printf("Monday");
           break;
        case 4:
           printf("Tuesday");
           break;
        case 5:
           printf("Wednesday");
           break;
        case 6:
           printf("Thursday");
           break;
        case 7:
           printf("Friday");
           break;
        default:
            printf("Invalid input! Please enter week number between 1-7.");
    }
}
