#include <stdio.h>

int main() {
    float angle1, angle2, angle3;

    // Input two angles from the user
    printf("Enter the first angle: ");
    scanf("%f", &angle1);
    printf("Enter the second angle: ");
    scanf("%f", &angle2);

    // Validation: Angles must be greater than 0 and their sum less than 180
    if (angle1 <= 0 || angle2 <= 0 || (angle1 + angle2) >= 180) {
        printf("Invalid angles! The sum of two angles must be less than 180 degrees.\n");
    } else {
        // Calculate the third angle
        angle3 = 180.0 - (angle1 + angle2);
        printf("The third angle is: %.2f degrees\n", angle3);

        // Check if any angle is exactly 90 degrees
        if (angle1 == 90 || angle2 == 90 || angle3 == 90) {
            printf("Result: It IS a right-angled triangle.\n");
        } else {
            printf("Result: It is NOT a right-angled triangle.\n");
        }
    }

    return 0;
}