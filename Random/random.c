
#include <stdio.h>

int main() {
    int marks[5], total = 0;
    float percentage;

    printf("Enter marks for 5 subjects (out of 100):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    percentage = (float)total / 5;

    printf("Aggregate Marks: %d\n", total);
    printf("Percentage Marks: %.2f\n", percentage);

    return 0;
}