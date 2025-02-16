#include<stdio.h>
int main(){

    // Q.Grade System: Write a program to assign grades 
    // based on marks using nested if-else (A, B, C, Fail).

    int marks;
    printf("Enter your marks : ");
    scanf("%d", &marks);

    if (marks <= 100)
    {
        if (marks >= 90)
        {
            printf("A Grade");
        }else if (marks >= 80)
        {
            printf("B Grade");
        }else if (marks >= 70)
        {
            printf("C Grade");
        }else if (marks >= 60)
        {
            printf("D Grade");
        }else{
            printf("Fail");
        }
        
    }else{
        printf("You Entered Incorrect Marks!");
    }
    
    
    
}