#include <stdio.h>
#include <math.h>


int main(){
    double A;
    double B;
    double C;
    printf("enter A:\n");
    scanf("%lf",&A);
    printf("enter B:\n");
    scanf("%lf",&B);
    C=sqrt(pow(A,2)+pow(B,2));
    printf("Your hypothenus is : \t");
    printf("%.1lf",C);
    return 0 ;
}