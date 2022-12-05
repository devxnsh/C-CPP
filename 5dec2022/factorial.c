#include <stdio.h>
int main() {
	int i;
	long j=1;
	printf("Enter Number to calculate factorial");
	scanf("%d",&i);
	if (i<0){printf("No factorial for negative numbers.");}
	else{
	while(i>1){
		j*=i;
		i--;
		}
	
	printf("%ld",j);}
return 0;
}
