#include <stdio.h>

int count_positive_integers(int arr[], int size);

int main() {
    int arr[] = {2, -3, 7, 0, 8, -1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = count_positive_integers(arr, size);
    printf("The number of positive integers in the array is: %d\n", count);
    return 0;
}

int count_positive_integers(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            count++;
        }
    }
    return count;
}
