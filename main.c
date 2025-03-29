#include <stdio.h>


// function to convert F to C
float fahrenheit_to_celsius(float farenheit) {
    float calculated_celsius = 0;

    calculated_celsius = (farenheit - 32) * 5 / 9;

    return calculated_celsius;
}

//function to convert C to F
float celsius_to_fahrenheit(float celsius) {
    float calculated_fahrenheit = (celsius * 9) / 5 + 32;

    return calculated_fahrenheit;
}

int main() {
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f));  // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c));  // Expected output: 98.6

    return 0;
}