#include <stdio.h>
#include <math.h>
int main(){
	int num1,num2;
	float result;
	int choice;
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("Calculator\nChoose 1 for Addition\nChoose 2 for Subtraction\nChoose 3 for Multiplication\nChoose 4 for Division");
	scanf("%d",&choice);
	printf("%d",choice);
	
	if (choice == 1){
		result = num1+num2;
	}
	if (choice == 2){
		result = num1-num2;
	}
	if (choice == 3){
		result = num1*num2;
	}
	if (choice == 4){
		result = num1/num2;
	}

	else {
		result = 69;
	}
	printf("%f",result);
	return 0;
}

