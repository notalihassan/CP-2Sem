#include<stdio.h>
int main(){

    // Q. Positive, Negative, or Zero: Write a program to 
    // determine if a number is positive, negative, or zero.

    int number;
    char opt;

    here:
    printf("Enter any number : ");
    scanf("%d", &number);

// METHOD 1
    
    if (number > 0)
    {
        printf("You entered a Postive number \n");
    }else if (number < 0)
    {
        printf("You entered a Negative number \n");
    }else{
        printf("You entered 0 \n");
    }

    printf("Do You want to continue (y or n) : ");
    scanf(" %c", &opt);
    if (opt == 'y')
    {
       goto here; 
    }
    




    // METHOD 2
    // if(number <= 0){
    //     if (number == 0)
    //     {
    //         printf("You entered 0");
    //     }else{
    //         printf("You entered a Negative number");
    //     }
    // }else{
    //     printf("The given number is Positive Number");
    // }
    
    
    return 0;
    

}