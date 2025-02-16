#include<stdio.h>
int main(){

    //Electricity Bill

    int units;
    float bill;
    printf("Enter units : ");
    scanf("%d", &units);

    if( units <= 100){
        bill = 100*1.5;
    }else if (units <=300)
    {
        bill = 100*1.5 + (units-100) * 2.5;
    }else{
        bill = 100*1.5 + 200 * 2.5 + (units - 300) * 4.0;
    }
    
    printf("Bill = %.2f", bill);
}