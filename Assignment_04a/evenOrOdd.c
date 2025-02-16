#include<stdio.h>
int main(){

    // Q. Even or Odd Check: Write a program to check whether a given number
    //  is even or odd using if-else.

    int number;

    printf("Enter any number : ");
    scanf("%d", &number);

    if(number % 2 == 0){
        printf("The given number is Even");
    }else{
        printf("The given number is Odd");
    }
}