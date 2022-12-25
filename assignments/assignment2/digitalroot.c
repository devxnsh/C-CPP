#include <stdio.h>
int main() {
    /* Digital Roots of a number mean the sum of all its digits. If the sum is not a one-digit number, 
    then its digits are summed again repetitively until it is a 1-digit number.*/
   long long int largenum, temp;int sum = 0;
   printf("Enter a positive largenum: ");
   scanf("%llu", &largenum);
   temp = largenum;
   while(temp != 0) {
      int digit = temp % 10;
      sum += digit;
      temp /=10;
      if(temp == 0 && sum > 9) {
         temp = sum;
         sum = 0;
      }
   }
   printf("The digital root of %llu is %u\n", largenum, sum);
   return 0;
}