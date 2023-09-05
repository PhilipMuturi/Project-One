#include <stdio.h>
#include <math.h>

int main() {
    // Declare variables to store radius and height
    float radius, height;

    // Prompt the user for input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculate the volume of the cylinder
    float volume = M_PI * pow(radius, 2) * height;

    // Display the result
    printf("The volume of the cylinder is: %.2f cubic units\n", volume);

    return 0;
}

