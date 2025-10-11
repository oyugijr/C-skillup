// Demonstrates passing parameters to a function

#include <stdio.h>

// Function with parameters
void displaySum(int a, int b) {
    int sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
}

int main() {
    int x = 5, y = 8;
    displaySum(x, y);  // Call with arguments
    return 0;
}
