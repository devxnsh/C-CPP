#include <stdio.h>
#include <math.h>
int main() {
    int num1,num2,count=0;
    float sqareroot=0,rem=0;
    printf("Enter Two Numbers to Detect Perfect Square between them");
    scanf("%d%d",&num1,&num2);
    for (int i=num1;i<=num2;i++){
        if (((float)(sqrt(i)/1) - sqrt(i)) ==0)
        {printf("%d is a perfect square\n",i);
        count++;}
        
        
    }
    if (count==0){printf("No perfect squares between %d and %d",num1,num2);}
return 0;
}
