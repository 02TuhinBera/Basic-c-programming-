#include <stdio.h>

float celsius_to_fahrenheit(float celsius) {
    float fahrenheit = (celsius * 1.8) + 32;
    return fahrenheit;
}

int main() {
    float celsius;
    printf("Enter temperature in Celsius\n");
    scanf("%f", &celsius);
    float fahrenheit = celsius_to_fahrenheit(celsius);
    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);
    return 0;
}//I can't understand this program .....here in this program "string function is using".
