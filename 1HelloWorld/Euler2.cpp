#include <stdio.h>

#define MAX_FIB 4000000

int main(void) {
    int a = 1, b = 1, c = 1, sum = 0;

    while (c <= MAX_FIB) {
        if (c % 2 == 0)
            sum += c;
        c = a + b;
        a = b;
        b = c;
    }

    printf("\nSum: %d\n", sum);

    return 0;
}