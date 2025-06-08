#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    if (left > right)
        return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == key)
        return mid;
    else if (arr[mid] > key)
        return binarySearch(arr, left, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, right, key);
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = binarySearch(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}
