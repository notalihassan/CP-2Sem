#include<stdio.h>
int main(){

    // Q. Character Case Check: Write a program to check whether
    //  a given character is uppercase or lowercase.

    char character;
    printf("Enter any character : ");
    scanf("%c", &character);

    if (character >= 'A' && character <= 'Z')
    {
        printf("UpperCase");
    }else if (character >= 'a' && character <= 'z')
    {
        printf("LowerCase");
    }
    
    else{
        printf("not a character!");
    }
    
}