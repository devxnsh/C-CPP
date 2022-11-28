#include <stdio.h>
int main() {
int num1;
printf("Enter Number");
scanf("%d",&num1);
if (num1<0){printf("Number is negative.");}
else if (num1>0) {printf("Number is positive");}
else {printf("Number is zero");}

return 0; }
