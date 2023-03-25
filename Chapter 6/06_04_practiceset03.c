#include <stdio.h>

void multiply_by_ten(int *num) {
    *num *= 10;
}

int main() {
    int num = 5;
    printf("Before: %d\n", num);
    multiply_by_ten(&num);
    printf("After: %d\n", num);
    return 0;
}
