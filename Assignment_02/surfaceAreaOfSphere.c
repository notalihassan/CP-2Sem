#include<stdio.h>
#include<math.h>
int main(){

    // Surface area of Sphere = 4 * pi * radius sq

    double radius = 3, area ;

    area = 4 * M_PI * pow(radius,2);

    printf("Surface area of sphere = %.2lf", area);


    return 0;
}