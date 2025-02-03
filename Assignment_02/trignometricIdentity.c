#include<stdio.h>
#include<math.h>
int main(){

    // Sin sq (theta) + Cos sq (theta) = 1

    double theta = 90; // in radians

    double result = pow(sin(theta), 2) + pow(cos(theta), 2);

    printf("Sin^2(%.2lf) + Cos^2(%.2lf) = %.2lf", theta,theta,result);

    return 0;
}