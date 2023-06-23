#include<stdio.h>

/**
*print_triangle - prints
*
*Return: 0
*/
void print_triangle(int size);

/**
*main - check code
*
*Return : 0
*/
int main(void)
{
    print_triangle(3);
}


void print_triangle(int size) 
{
    if (size <= 0) {
        putchar('\n');
        return;
    }

    int row, column;
    for (row = 1; row <= size; row++) {
        for (column = 1; column <= row; column++) {
            putchar('#');
        }
        putchar('\n');
    }
}
