#include <stdio.h>
int main() {

    // usin "goto"

    
    int i = 1;
loop:
    if (i > 10) return 0;
    if (i % 2 == 0) {
        i++;
        goto loop;
    }
    printf("%d ", i);
    i++;
    goto loop;
}