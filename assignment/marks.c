#include <stdio.h>

int main() {
int num1,num2,num3,num4,num5;
printf("Enter Marks of Five Subjects out of 100");
scanf("%d%d%d%d%d",&num1,&num2,&num3,&num4,&num5);
float total,per,avg;
total = num1+num2+num3+num4+num5;
avg = total/5;
per = (total*100/500);
printf("%f\n%f\n%f\n",total,avg,per);

if (per<35){printf("fail");}
else {printf("pass");}

return 0; }
