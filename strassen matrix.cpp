#include <stdio.h>
#include <stdlib.h>

void matrixMultiply(int n, int a[n][n], int B[n][n], int C[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int n = 2;
    int A[2][2] = {
        {1, 2},
        {3, 4}
    };
    int B[2][2] = {
        {5, 6},
        {7, 8}
    };
    int C[2][2];

    matrixMultiply(n, A, B, C);

    printf("Result matrix C is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}

