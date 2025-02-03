#include<stdio.h>
#include<math.h>
int main(){

    // find the area of circle  A = pi * r square 

    // Method no.1

    /*float r = 3, pi = 3.14;
    float area = pi*(r*r);
    printf("The Area of circle of 3 is : %f", area);*/

    // Method no.2

    //using math.h liberary of C
    double radius = 3, area;
    area = M_PI * pow(3, 2);  //// Using pow() from math.h

    printf("Area of Circle of 3 is : %.3lf", area );  // for long format specifier is %lf
    // and .3 means it gives 3 digit value after point .

    return 0;



}