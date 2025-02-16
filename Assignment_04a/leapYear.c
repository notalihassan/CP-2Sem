#include<stdio.h>
int main(){

    //check leap year

    int year;
    printf("Enter year : ");
    scanf("%d", &year);

    if( (year % 4 == 0 && year % 100 != 0) || (year %400 == 0) )
    {
        printf("Entered Year %d is leap year.", year);
    }else{
        printf("Not a leap year");
    }
    
}