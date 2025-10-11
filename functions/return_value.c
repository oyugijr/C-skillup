// return_values.c
// Demonstrates a function returning a value

#include <stdio.h>

// Function that returns an integer
int multiply(int a, int b) {
    return a * b;
}

int main() {
    int result = multiply(4, 7);
    printf("Multiplication result: %d\n", result);
    return 0;
}
