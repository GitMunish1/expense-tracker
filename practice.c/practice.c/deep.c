#include <stdio.h>

int main() {
    int int1, int2;
    float float1, float2;

    // Read two integers
    scanf("%d %d", &int1, &int2);

    // Read two floating-point numbers
    scanf("%f %f", &float1, &float2);

    // Calculate sum and difference for integers and floats
    int sum_int = int1 + int2;
    int diff_int = int1 - int2;
    float sum_float = float1 + float2;
    float diff_float = float1 - float2;

    // Print the sum and difference of both integers
    printf("%d %d\n", sum_int, diff_int);

    // Print the sum and difference of both floats with 1 decimal place
    printf("%.1f %.1f\n", sum_float, diff_float);

    return 0;
}
