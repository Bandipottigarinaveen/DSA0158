#include <stdio.h>

int binarySearch(int arr[], int left, int right, int key) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binarySearch(arr, left, mid - 1, key);
        return binarySearch(arr, mid + 1, right, key);
    }
    return -1;
}

int main() {
    int arr[] = { 2, 5, 7, 12, 34, 56, 78, 91 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 32;
    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1)
        printf("Element %d found at index %d\n", key, index);
    else
        printf("Element %d not found in the array\n", key);
    return 0;
}

