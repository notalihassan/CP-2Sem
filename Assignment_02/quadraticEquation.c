#include<stdio.h>
#include<math.h>
int main(){

    // find the value of quadratic equation 
    // x = -b+- under root b square - 4ac / 2a

    double a=3,b=6,c=2,discriminant,root1,root2;

    discriminant = pow(b, 2) - 4*a*c; // pow menas power of b is 2

    if (discriminant >= 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2*a);  // sqrt means square root
        root2 = (-b - sqrt(discriminant)) / (2*a);

        printf("Roots are %lf, %lf", root1,root2);
    
    }else{
        printf("No real roots");    
    }

    return 0;
    
}