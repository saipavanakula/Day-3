#include <stdio.h>

int delete_digit(int num) {
    int largest = 0;

    // Loop through each digit position to delete
    for (int i = 0; i < 4; i++) {
        int temp = num / 10;  // Remove the rightmost digit

        // Shift remaining digits to fill the gap
        for (int j = 0; j < 4; j++) {
            if (j != i) {
                temp = temp * 10 + (num % 10);
            }
            num /= 10;
        }

        // Update the largest number if current iteration's number is larger
        if (temp > largest) {
            largest = temp;
        }

        num = temp;  // Restore the original number for the next iteration
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    int result = delete_digit(num);
    printf("Largest number by deleting a single digit: %d\n", result);

    return 0;
}