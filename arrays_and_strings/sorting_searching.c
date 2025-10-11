// Demonstrates simple sorting (Bubble Sort) and linear search

#include <stdio.h>

int main() {
    int arr[5] = {23, 12, 45, 8, 19};
    int n = 5, temp;

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    // Linear Search
    int search = 19, found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("\nElement %d found at index %d\n", search, i);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("\nElement not found\n");

    return 0;
}
