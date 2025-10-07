// Demonstrates user input and output in C

#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your name: ");
    scanf("%s", name);  // Reads a single word

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nHello %s, you are %d years old.\n", name, age);

    return 0;
}
