#include <stdio.h>

void shiftColumns(int arr[][100], int rows, int cols) {
    int temp1[rows], temp2[rows];
    for (int i = 0; i < rows; i++) {
        temp1[i] = arr[i][cols - 2];
        temp2[i] = arr[i][cols - 1];
    }
    for (int i = cols - 1; i >= 2; i--) {
        for (int j = 0; j < rows; j++) {
            arr[j][i] = arr[j][i - 2];
        }
    }
    for (int i = 0; i < rows; i++) {
        arr[i][0] = temp2[i];
        arr[i][1] = temp1[i];
    }
}

int main() {
    int arr[100][100] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 8, 7, 6}};
    int rows = 3;
    int cols = 4;

    printf("Original array: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    shiftColumns(arr, rows, cols);

    printf("Shifted array: \n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    return 0;
}
