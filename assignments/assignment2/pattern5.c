#include <stdio.h>
int main() {
	int i,j,count=0;
    // Drawing Straight Line of 36 units
    for (int i1=0;i1<36;i1++){printf("*");}
    printf("\n"); /*Line Change*/

    //Drawing Two Alternate Lines worth three stars each
    count=0;
    for(int counter=0;counter<2;counter++){  //To make two similar lines
        for (int j1=1;j1<=30;j1++){
            if (count<3){
                printf("*");
                count++;}
            if (count>=3){
                printf(" ");
                count++;}
            if (count>=6){count=0;}
        }
        printf("\n"); /*Line Change*/
    }
    count=0;
    //Drawing Two Alternate Lines worth three stars each
    for(int counter=0;counter<2;counter++){ //To make two similar lines
        for (int j1=1;j1<=30;j1++){
            if (count<3){ //Adds three spaces
                printf(" ");
                count++;
            }
            if (count>=3){
                printf("*");
                count++;
            }
            if (count>=6){count=0;}}
    printf("\n"); /*Line Change*/}

    // Drawing Straight Line of 36 units
    for (int i1=0;i1<36;i1++){printf("*");}
    printf("\n"); /*Line Change*/

    // Upper Diamond
    for (i=1;i<=9;i+=2){
            for (j=i;j<=32;j+=2) {printf(" ");} //Adds spaces which decrease after each run
            for (j=1;j<=i;j++) {printf("*");} //Adds stars which increase after each run
            printf("\n"); /*Line Change*/
        }
    //Lower Diamond
    for (i=1;i<=7;i+=2){
            for (j=1;j<=(i+24);j+=2) {printf(" ");} //Adds Spaces which increase after each run
            for (j=i;j<=7;j++) {printf("*");} // Adds Stars which decrease after each run
            printf("\n"); /*Line Change*/
            
        }
    // Drawing Straight Line of 36 units
    for (int i1=0;i1<36;i1++){printf("*");}
    printf("\n"); /*Line Change*/
    count=0;
    for(int counter=0;counter<2;counter++){ //To make two similar lines
        for (int j1=1;j1<=30;j1++){
            if (count<3){
                printf(" "); //Adds three spaces
                count++;
            }
            if (count>=3){
                printf("*"); //Adds three stars
                count++;
            }
            if (count>=6){count=0;}}  //Resets Counter
        printf("\n"); /*Line Change*/}
    count=0;
    for(int counter=0;counter<2;counter++){ //To make two similar lines
        for (int j1=1;j1<=30;j1++){
            if (count<3){ //Adds Three Stars
                printf("*");
                count++;}
            if (count>=3){ //Adds Three Spaces
                printf(" ");
                count++;}
            if (count>=6){count=0;} //Resets Counter
        }
    printf("\n"); /*Line Change*/}
    // Drawing Straight Line of 36 units
    for (int i1=0;i1<36;i1++){printf("*");}
    printf("\n"); /*Line Change*/
    return 0;
}
