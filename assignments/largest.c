#include <stdio.h>
int main() {
int num1,num2,num3;
printf("Enter Three nums ");
scanf("%d%d%d",&num1,&num2,&num3);
if (num1==num2 && num2==num3){printf("All are Equal to %d",num1);}
else if (num1==num2 && num2!=num3){printf("Two numbers are equal, third is %d",num3);}

else if (num1==num3 && num2!=num3){printf("Two numbers are equal, third is %d",num2);}
else if (num3==num2 && num1!=num3){printf("Two numbers are equal, third is %d",num1);}
else {
	if (num1>num2 && num2>num3){printf("123");}
	if (num1>num3 && num3>num2){printf("132");}
	if (num2>num1 && num1>num3){printf("213");}
	if (num2>num3 && num3>num1){printf("231");}
	if (num3>num2 && num2>num1){printf("321");}
	if (num3>num1 && num1>num2){printf("312");}
}
	
return 0; }
