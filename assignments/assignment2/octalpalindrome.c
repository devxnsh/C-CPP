#include <math.h>
#include <stdio.h>
int main() {
    int num,dig,octalsum,i=0,j=0,revoctal;
    printf("Enter Number to Check Octal Palindrome");
    scanf("%d",&num);
    int numor = num;
    
    while (num>0){        
        dig = num%8;
        num=num/8;
        octalsum+=dig*pow(10,i);
        i++;
    }

printf("%d is the octal conversion of %d\n",octalsum,numor);

//Palindrome
i=0;
int temp = octalsum;
while (temp>0){
    revoctal = ((revoctal*10) + (temp%10));
    temp/=10;
}
if (octalsum==revoctal){
    printf("%d is a palindrome",revoctal);
}
else{
    printf("Not a palindrome");
}

return 0;
}
