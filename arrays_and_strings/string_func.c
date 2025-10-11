// Demonstrates common string functions in C

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[100];

    // Copy
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    // Concatenate
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Length
    printf("Length of str2: %zu\n", strlen(str2));

    // Compare
    if (strcmp(str1, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are different\n");

    return 0;
}
