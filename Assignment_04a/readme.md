============key Points============

1. In this assignment i learn about "goto statement". it is used like loop.
Example:
   int main() {
    int n = 0;  

    // If the number is zero, jump to here lable
    if (n == 0)
        goto here;

    // This will be skipped
    printf("You entered: %d\n", n);

here:
    printf("Exiting the program.\n");
    return 0;
}

2. Simple Login System: Write a program that asks for
    a username and password, then checks if they are correct using if-else.

    *To store string value we use <string.h> library.
    *to compare strings we use strcmp() funcation (called string compare fnction).
    *"if strings are equal it gives 0".
    *when we save STRING value, we cannot add & in scanf().
    * char greetings[] = "Hello World!"; //TO STORE STRING VALUE hmmmmmm......