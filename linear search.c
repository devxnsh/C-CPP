#include <stdio.h>
void main(){
int nums;
printf("Enter Number to search for in array");
scanf("%d",&nums);
int x[10]={0,1,2,3,4,5,6,7,8,9};
for (int i=0;i<10;i++){
	if (x[i]==nums){printf("Found you");break;}
	else{printf("%d is not %d\n",x[i],nums);}

}
}
