
/*
Name; Sanchez Ochieng
Reg no;CT101/G/26450/25
Date;24.9.2025
Description; volume and surface area 
*/


// main function
#include <stdio.h>
#define PI 3.142

int main() {
    double radius, height;
    double volume, surface_area;

    //prompt user to enter 
    printf("Enter the radius of the cylinder: ");
    scanf("%lf", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%lf", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surface_area = 2 * PI * radius * (radius + height);

    // Display results
    printf("\nCylinder Dimensions:\n");
    printf("Radius: %.2lf\n", radius);
    printf("Height: %.2lf\n", height);
    printf("Volume: %.2lf cubic units\n", volume);
    printf("Surface Area: %.2lf square units\n", surface_area);

    return 0;
