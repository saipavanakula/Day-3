#include <stdio.h>

void find_smallest_largest_digits(int n, int numbers[]) {
    int smallest = 9;
    int largest = 0;
    int i, num, digit;

    for (i = 0; i < n; i++) {
        num = numbers[i];
        
        // Iterate through each digit of the number
        while (num > 0) {
            digit = num % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            if (digit > largest) {
                largest = digit;
            }
            num /= 10;
        }
    }

    if (smallest == 9 && largest == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest Digit: %d\n", smallest);
        printf("Largest Digit: %d\n", largest);
    }
}

int main() {
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int numbers[n];
    printf("Enter the %d numbers: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    find_smallest_largest_digits(n, numbers);

    return 0;
}