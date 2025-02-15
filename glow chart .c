#include <stdio.h>

#define PI 3.14

int main() {
    float radius, area;

    // Prompt the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate the area
    area = PI * radius * radius;

    // Display the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}