#include <stdio.h>
int main() {
    int num;
    printf("Enter Number to generate collatz sequence");
    scanf("%d",&num);
    printf("%d  ",num);
    while (num!=1){
        
        if (num%2==0){num=num/2;}
        else {num=3*num+1;}
        printf("%d  ",num);

    }
return 0;
}
