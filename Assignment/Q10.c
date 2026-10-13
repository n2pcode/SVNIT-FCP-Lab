#include<stdio.h>
int main(){

    float math, phy, chem, ent, cm;

    printf("Enter marks of Mathematics: ");
    scanf("%f", &math);

    printf("Enter marks of Physics: ");
    scanf("%f", &phy);

    printf("Enter marks of Chemistry: ");
    scanf("%f", &chem);

    printf("Enter marks of Entrance: ");
    scanf("%f", &ent);

    cm = (math / 2) + (phy / 2) + (chem / 2) + ent;

    printf("\nCut Off Marks = %f\n", cm);
    return 0;

}