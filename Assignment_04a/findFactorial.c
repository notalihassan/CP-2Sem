#include <stdio.h>
int main() {
    int num, fact = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

loop:
    if (i > num)
        goto end;
    fact *= i;
    i++;
    goto loop;

end:
    printf("Factorial: %d\n", fact);
    return 0;
}