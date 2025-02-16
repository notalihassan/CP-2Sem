#include<stdio.h>
int main(){

    // Q. Check Voting Eligibility: Write a program to 
    // check if a person is eligible to vote (age >= 18).

    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You are eligible for voting!");
    }else{
        printf("You are not eligible for voting :)");
    }
    
}