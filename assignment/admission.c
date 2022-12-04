#include <stdio.h>
int main() 
{
    int phy,chem,math,total,totalmp;
    printf("Enter Marks for Physics, Chemistry, Mathematics");
    scanf("%d%d%d",&phy,&chem,&math);
    total = phy+ chem+math;
    totalmp = phy + math;
    if (phy>=55 && chem>=50 && math>=65 && (total>=190||totalmp>=140))
    {
        printf("Eligible for Admission");
    }
    else 
    {
        printf("Try again next year!");
    }
    return 0;
}