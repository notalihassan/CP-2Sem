#include<stdio.h>
#include<math.h>
int main(){

    // c square = a square + b square. For right angle triange where c is the hypoteneous
    // so, c = square root ( a square + b square ) 

    int a = 3, b = 4, c;

    c = sqrt(pow(a, 2) + pow(b, 2));

    printf("Hyppoteneous : %d", c);
}