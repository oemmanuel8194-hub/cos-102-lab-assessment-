#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Reverse the number mathematically
    while (num > 0) {
        remainder = num % 10;                  // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10;                             // Remove the last digit
    }

    // Check if the original number and reversed number match
    if (originalNum == reversedNum) {
        printf("Result: %d is a Palindrome number.\n", originalNum);
    } else {
        printf("Result: %d is NOT a Palindrome number.\n", originalNum);
    }

    return 0;
}