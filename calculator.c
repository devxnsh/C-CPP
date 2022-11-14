#include <stdio.h>
#include <math.h>
int main(){
	int num1,num2;
	float result;
	char choice;
	printf("Enter two numbers");
	scanf("%d%d",&num1,&num2);
	printf("Choose operation + - x / ");
	scanf("%c\n",&choice);
	if (choice == '+'){
		result = num1+num2;
	}
	else {
		result = 0;
	}
	printf("%c",choice);
	printf("%f",result);
	return 0;
}

