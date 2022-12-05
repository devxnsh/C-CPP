#include <stdio.h>
int main() {
	int sum=0,i,num;
	printf("Enter Number to calculate sum uptil");
	scanf("%d",&num);
	while (i<=num){
	sum+=i;
	i++;
	}
	printf("%d",sum);
return 0;
}
