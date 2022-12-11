#include <stdio.h>
#include <math.h>
int main(){
int x,num=0,lim;
float term,sum;
printf("Enter X ");
scanf("%d",&x);

printf("Enter Limit of summation ");
scanf("%d",&lim);
while (num=lim)
{
term = (pow(x,num))/(pow(num,num));
printf("%f\n",term);
if (num%2==0){sum+=term;}

else{sum-=term;}
num++;
printf("Result is, %f\n",sum);

}
printf("Result is, %f",sum);
return 0;
}
