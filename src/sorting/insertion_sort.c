/*
Insert Sort is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.
It is likes sorting playing cards in your hands.

Time complexity: O(n^2)

=====================================================

Advantages:
    - Stable sorting algorithm
    - Efficient for small lists and nearly sorted lists.

Disadvantages:
    - Inefficient fo are lists.
    - Not as efficient as other sorting algorithm (merge sort, quicksort) for most case
*/

#include <stdio.h>

void insert_sort(int arr[], int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insert_sort(arr, n);
    print_array(arr, n);

    return 0;
}