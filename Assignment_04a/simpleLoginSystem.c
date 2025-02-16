#include<stdio.h>
#include<string.h>
int main(){

    // Q. Simple Login System: Write a program that asks for
    //  a username and password, then checks if they are correct using if-else.

    // ================ Key Points =================

    //To store string value we use <string.h> library.
    //to compare strings we use strcmp() funcation (called string compare fnction).
    //"if strings are equal it gives 0".
    //when we save STRING value, we cannot add & in scanf().
    // char greetings[] = "Hello World!"; //TO STORE STRING VALUE


    char username[20], password[20];
    printf("Enter your username : ");
    scanf("%s", username);
    printf("Enter your password : ");
    scanf("%s", password);


    if ( strcmp(username, "user") == 0 && strcmp(password, "123") == 0 )
    {
        printf("Login Successfully!");
    }else
    {
        printf("You entered incorrect Username or Password");
    }
    
}