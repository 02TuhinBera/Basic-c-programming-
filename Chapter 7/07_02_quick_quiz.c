#include <stdio.h>

#define ROWS 3
#define COLS 4

void displayArray(int arr[][COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}                                                                       // [From the Chatgpt]

int main() {
    int arr[ROWS][COLS];

    printf("Enter %d elements of the %d x %d array:\n", ROWS * COLS, ROWS, COLS);

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The contents of the array are:\n");
    displayArray(arr, ROWS, COLS);

    return 0;
}
