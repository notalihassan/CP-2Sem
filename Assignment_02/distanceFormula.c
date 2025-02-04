#include<stdio.h>
#include<math.h>
int main(){
    
    // distance formula = d = sqrt (x2 - x1) sq + (y2 - y1) sq

    double x1 = 2, x2 = 4, y1 = 3, y2 = 5, d;

    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("Distance = %lf", d);

    return 0;
}