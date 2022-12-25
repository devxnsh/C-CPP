#include <stdio.h>
#include <math.h>
int main(){
	int cashvalue;
	printf("Enter Cash Value");
	scanf("%d",&cashvalue);

	printf("%d 100 Rupee Notes \n",(cashvalue/100));
	cashvalue = cashvalue%100;

	printf("%d 50 Rupee Notes \n",(cashvalue/50));
	cashvalue = cashvalue%50;

	printf("%d 20 Rupee Notes \n",(cashvalue/20));
	cashvalue = cashvalue%20;

	printf("%d 10 Rupee Notes \n",(cashvalue/10));
	cashvalue = cashvalue%10;

	printf("%d 5 Rupee Notes \n",(cashvalue/5));
	cashvalue = cashvalue%5;
	
	printf("%d 2 Rupee Notes \n",(cashvalue/2));
	cashvalue = cashvalue%2;

	printf("%d 1 Rupee Notes \n",(cashvalue/1));
	cashvalue = cashvalue%1;
	

	return 0;
}

