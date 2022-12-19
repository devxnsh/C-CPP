#include <stdio.h>
#include <math.h>

int convert(int decinum){
	int binnum=0,ori,i=0;
	ori = decinum;
		
	while (decinum>0){
		int temp = decinum%2;
		binnum+=temp*pow(10,i);
		decinum=decinum/2;
		i++;

		}
	printf("%d is the binary conversion of %d",binnum,ori);
	return 0;
}



int main(){
	int actual;
	printf("Enter Number to convert deci to bin");
	scanf("%d",&actual);
	convert(actual);


return 0;
}
