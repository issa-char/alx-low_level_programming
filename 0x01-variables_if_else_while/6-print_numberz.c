#include <stdio.h>

int main() {
    int number = 0;

    while (number < 10) {
        putchar(number + '0');
        number++;
    }

    putchar('\n');

    return 0;
}
