#include <stdio.h>
#include <math.h>
int main() {
int a,b,c;
float root1,root2;
printf("Enter Coefficients of x^2, x and constant ");
scanf("%d%d%d",&a,&b,&c);
root1 = (-b + sqrt(pow(b,2)-(4*a*c)))/(2*a);
root2 = (-b - sqrt(pow(b,2)-(4*a*c)))/(2*a);
printf("%f\n%f",root1,root2);

	
return 0; }
