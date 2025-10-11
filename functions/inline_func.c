// inline_functions.c
// C doesn’t have true inline functions like C++, but macros can behave similarly

#include <stdio.h>

// Macro acting like an inline function
#define SQUARE(x) ((x) * (x))

int main() {
    int num = 6;
    printf("Square of %d is %d\n", num, SQUARE(num));
    return 0;
}
