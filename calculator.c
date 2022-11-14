#include <stdio.h>
#include <math.h>
int main(){
	int num1,num2;
	float result;
	char choice;
	printf("Enter two numbers");
	scanf("&d&d",&num1,&num2);
	printf("Choose operation + - x / ");
	scanf("%c\n",&choice);
	result = num1+num2;
	printf(result);
	return 0;
}
