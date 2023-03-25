#include <stdio.h>

typedef struct {
    double real_part;
    double imaginary_part;
} ComplexNumber;

void print_complex(ComplexNumber c) {
    if (c.imaginary_part >= 0) {
        printf("%.2f + %.2fi\n", c.real_part, c.imaginary_part);
    } else {
        printf("%.2f - %.2fi\n", c.real_part, -c.imaginary_part);
    }
}

int main() {
    ComplexNumber c1 = {1.0, 2.0};
    ComplexNumber c2 = {3.0, -4.0};
    
    printf("c1 = ");
    print_complex(c1);
    printf("c2 = ");
    print_complex(c2);
    
    return 0;
}
