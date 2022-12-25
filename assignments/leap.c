#include <stdio.h>
int main() 
{
int year;
/* Declaring year variable */
printf("Enter Year ");
scanf("%d",&year);
/* Taking input*/
if ((year%4 == 0 && year%100!=0) || (year%400 ==0)) {
/* A year is leap if it is divisible by 4 and not divisible by 100. However, it is a leap year if it is divisible by 400.*/
    printf("Leap");
    }
else{
       printf("Not leap");
       }
	
return 0; 
}
