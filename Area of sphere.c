#include <stdio.h>
int main(){
    //variable declaration
    //SA is surface Area and r is Radius
const double pi=3.142;
double r;
double SA;
//capturing data
printf("enter radius of sphere");
scanf("%lf",&r);
//calculation
SA=4*pi*r*r;
printf("area of sphere is %lf",SA);
return 0;
}
