#include<stdio.h>
int main(){

    //Number sign using "goto"

    int number;
    printf("Enter any number : ");
    scanf("%d", &number);

    if (number > 0)
    {
       goto positive;
    }else if (number < 0)
    {
        goto negative;
    }else{
        goto zero;
    }
    

    positive: 
    
    printf("The entered number is Positive!");
    return 0;

    negative:

    printf("The entered number is Negative!");
    return 0;

    zero:

    printf("The entered number is 0!");
    return 0;
    
}