#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,choice;
    float result;
    int num3;
    printf("Enter Two Numbers");
    scanf("%d%d",&num1,&num2);
    printf("Enter 1 for addition, 2 for subtraction, 3 for multiplication, 4 for division, 5 for power");
    scanf("%d",&choice);
    
    switch (choice) {
        case 1 : {
            result = num1+num2;
            break;
        }
        case 2 : {
            result = num1-num2;
            break;
        }
        case 3 : {
            result = num1*num2;
            break;
        }
        case 4 : {
            result = num1/num2;
            break;
        }
        case 5 : {
            result = pow(num1,num2);
            break;
        }


    printf("%f",result);
    }
    return 0;
}