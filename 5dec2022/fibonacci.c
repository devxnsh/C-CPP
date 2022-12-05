#include <stdio.h>
int main() {
	int a=1,b=1,c;
	while (a<500){
	c=a+b;
	a=b;
	b=c;
	printf("%d\n",c);
	}
return 0;
}
