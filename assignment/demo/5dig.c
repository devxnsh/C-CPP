#include <stdio.h>
#include <math.h>
int main(){
	int dig5=1,pl1,newdig,i=0;
	printf("Enter 5-digit number");
	scanf("%d",&dig5);
	
	while (dig5>0){
	
	pl1 = ((dig5%10)+5)%10;
	dig5=dig5/10;
	newdig+=(pl1*pow(10,i));
	i++;
	}
	printf("\n%d",newdig);
	return 0;
}

