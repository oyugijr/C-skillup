// simple_function.c
// Demonstrates a simple function definition and call

#include <stdio.h>

// Function declaration
void greet();

int main() {
    greet();  // Function call
    return 0;
}

// Function definition
void greet() {
    printf("Hello from a simple function!\n");
}
