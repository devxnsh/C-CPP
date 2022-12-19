#include <stdio.h>
#include <math.h>

int fact(int num1){
long double factorial=1;
	
while (num1>1){
	
	factorial*=num1;
	num1--;
}

printf("%Lf is the factorial",factorial);
return 0;
}

int main(){
	int actual;
	printf("Enter Number to calculate factorial");
	scanf("%d",&actual);
	fact(actual);


return 0;
}
