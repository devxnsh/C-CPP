#include <stdio.h>
int main() {
    int temp;
    printf("Enter Temperature in Deg. Celsius");
    scanf("%d",&temp);
    if (temp<0) {
        printf("Freezing");
    }
    else if (temp<10 && temp>0) {
        printf("Very Cold");
    }
    else if (temp<20 && temp>10) {
        printf("Cold");
    }
    else if (temp<30 && temp>20) {
        printf("Normal");
    }
    else if (temp<40 && temp>30){
        printf("Hot");
    }
    else{
        printf("Very Hot");
     }

    return 0;
}