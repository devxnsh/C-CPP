// Write a function that inputs a binary or octal number and converts to decimal

#include <stdio.h>
#include <math.h>
int decnum,i=0;
int conv( int binnum, int base){
	if (base == 2){ 
//		printf("\n BINARY \n");
		decnum += (binnum%10)*pow(2,i);
		i++;
		binnum=binnum/10;
		if (binnum>0){conv(binnum,2);}}
	else if (base == 8) {
//		printf("\n OCTAL \n");
		decnum += (binnum%10)*pow(8,i);
		i++;
		binnum=binnum/10;
		if (binnum>0){conv(binnum,8);}}
	
return decnum;
}

int main(){
int scannum,basenum;
printf("Enter Number and enter base");
scanf("%d%d",&scannum,&basenum);
printf("%d",conv(scannum,basenum));
}
