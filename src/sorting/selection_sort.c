/*
Selection Sort is a comparison-based sorting algorithm. It sorts an array by repeatedly selecting the smallest (or largest) element from the unsorted portion and swapping it with the first unsorted element. This process continues until the entire array is sorted.

Time complexity: O(n^2)

=====================================================

Advantages:
    - Requires only a constant O(1) extra memory space
    - It requires less number of swaps(or memory writes) compared to many other standard algorithms. Therefore it can be simple algorithm choice when memory writs are costly.

Disadvantages:
    - As Selection Sort has a time complexity of O(n^2) makes it slower compared to algorithms like Quick Sort or Merge Sort.
    - Does not maintain the relative order of equal elements which means it is not stable.
*/


#include <stdio.h>

void selection_sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
            
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    print_array(arr, n);
    
    selection_sort(arr, n);

    printf("Sorted array: ");
    print_array(arr, n);

    return 0;
}