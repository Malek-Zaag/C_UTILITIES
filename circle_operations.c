#include <stdio.h>
#include <math.h>


int main(){
    double const PI=3.14;
    double r;
    double cir;
    double aire;
    printf("Please enter your circle rayon : \t");
    scanf("%lf",&r);
    cir=2*PI*r;
    printf("The circumference of your circle is :\t");
    printf("%lf\n",cir);
    aire=PI*pow(r,2);
    printf("The aire of your circle is :\t");
    printf("%lf",aire);
    return 0;
}