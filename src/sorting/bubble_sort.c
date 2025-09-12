/*
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.

Time complexity: O(n^2)

====================================================

Advantages:
    - Easy to understand and implement
    - It does not require any additional memory space.

Disadvantages:
    - Has a time complexity of O(n^2) which makes it very slow for large data sets.
    - Has almost no or limited real world applications.
*/

#include <stdio.h>
#include <stdbool.h>

void swap(int *xp, int *yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubble_sort(int arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }
}

void print_array(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);

    bubble_sort(arr, n);

    printf("Sorted array: ");
    print_array(arr, n);

    printf("%d", sizeof(int));

    return 0;
}