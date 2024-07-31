#include <stdio.h>
#include <limits.h>

int main() {
    int numbers[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3, 5};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    if (n == 0) {
        printf("The list is empty.\n");
        return 1;
    }

    int min_value = INT_MAX;
    int max_value = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (numbers[i] < min_value) {
            min_value = numbers[i];
        }
        if (numbers[i] > max_value) {
            max_value = numbers[i];
        }
    }

    printf("Minimum value: %d\n", min_value);
    printf("Maximum value: %d\n", max_value);

    return 0;
}

