#include <stdio.h>
int main() {
int side1,side2,side3;
printf("Enter Three Sides of Triangle");
scanf("%d%d%d",&side1,&side2,&side3);
if (side1==side2 && side2==side3){printf("Equilateral");}
else if (side1==side2 && side2!=side3){printf("Isoceles");}

else if (side1==side3 && side2!=side3){printf("Isoceles");}
else if (side3==side2 && side1!=side3){printf("Isoceles");}
else {printf("Scalene");}
return 0; }
