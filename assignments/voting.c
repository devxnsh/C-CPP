#include <stdio.h>
int main() 
{
/* Starting Program*/
int age;
/*Declaring age variable*/
printf("Enter Age");
scanf("%d",&age);
/* Taking input for age*/
if (age<18)
{
    printf("Ineligible to vote");
    }
else 
    {
        printf("Eligible to vote");
    }

return 0; 
}
