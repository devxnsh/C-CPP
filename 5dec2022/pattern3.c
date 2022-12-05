#include <stdio.h>
int main() {
	int i,j;
	for (i=1;i<=8;i+=2){
		for (j=i;j<=8;j+=2) {
			printf(" ");

		}
		
		
		for (j=1;j<=i;j++) {
			printf("*");

		}
					
		printf("\n");
	}


	for (i=1;i<=5;i+=2){
		for (j=1;j<=(i+2);j+=2) {
			printf(" ");

		}

		for (j=i;j<=5;j++) {
			printf("*");

		}
					
		printf("\n");
	
	
	
	}


return 0;
}
