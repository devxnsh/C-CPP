#include <stdio.h>
int main() {
    int sum,count=0;
for (int i =100;i<=200;i++){
    if (i%9==0){
        sum+=i;
	count++;
    }
}
printf("Sum of all integers divisible by 9 between 100 and 200 is %d\n",sum);
printf("Number of integers divisible by 9 between 100 and 200 is %d",count);
return 0;
}
