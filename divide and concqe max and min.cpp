#include <stdio.h>
#include <limits.h>

void findMinMax(int arr[], int left, int right, int *min, int *max) {
    if (left == right) {
        if (arr[left] > *max) *max = arr[left];
        if (arr[left] < *min) *min = arr[left];
        return;
    }
    
    if (right == left + 1) {
        if (arr[left] > arr[right]) {
            if (arr[left] > *max) *max = arr[left];
            if (arr[right] < *min) *min = arr[right];
        } else {
            if (arr[right] > *max) *max = arr[right];
            if (arr[left] < *min) *min = arr[left];
        }
        return;
    }
    
    int mid = left + (right - left) / 2;
    int min1 = INT_MAX, max1 = INT_MIN;
    int min2 = INT_MAX, max2 = INT_MIN;
    
    findMinMax(arr, left, mid, &min1, &max1);
    findMinMax(arr, mid + 1, right, &min2, &max2);
    
    if (min1 < min2) *min = min1;
    else *min = min2;
    
    if (max1 > max2) *max = max1;
    else *max = max2;
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 12, 2, 6, 5, 3, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int min = INT_MAX, max = INT_MIN;
    
    findMinMax(arr, 0, n - 1, &min, &max);
    
    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);
    
    return 0;
}


