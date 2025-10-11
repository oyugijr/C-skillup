// Demonstrates basic string input and output

#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // safer input

    printf("Hello, %s", name);
    return 0;
}
