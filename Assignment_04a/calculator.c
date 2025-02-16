#include<stdio.h>
int main(){

    // Q.Simple Calculator: Write a program that takes two numbers and an
    //  operator (+, -, *, /) and performs the calculation using if-else.

    int num1, num2;
    char operator;
    printf("Enter Two numbers with operator : ");
    scanf("%d %c %d", &num1, &operator, &num2);

    if (operator == '+' )
    {
        printf("Result = %d", num1 + num2);
    }else if (operator == '-')
    {
        printf("Result = %d", num1 - num2);
    }else if (operator == '*')
    {
        printf("Result = %d", num1 * num2);
    }else if (operator == '/')
    {
        printf("Result = %d", num1 / num2);
    }
    
    
    
    
}