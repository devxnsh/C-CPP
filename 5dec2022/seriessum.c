#include <stdio.h>
int main() {
	int i=0,n;
	float num1 =1 ,num2 = 2,term;
	float sum;
	printf("Enter n");
	scanf("%d",&n);
	while (i<n){
	term = (num1/num2);
	sum+=term;
	
	num1++;
	num2++;
	i++;
	
	}
	printf("%f\n",sum);

return 0;
}
