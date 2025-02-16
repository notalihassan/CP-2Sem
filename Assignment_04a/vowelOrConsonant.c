#include<stdio.h>
int main(){

    //Check Vowels or Consonant

    char input;
    printf("Enter any character : ");
    scanf("%c", &input);

    if( input == 'a' || input == 'e' || input == 'i' || input == 'o' || input == 'u' ||
     input == 'A' || input == 'E' || input == 'I' || input == 'O' || input == 'U' ){
        printf("Entered character is vowel");
     }
    else{
        printf("Entered character is consonant");
     }
}