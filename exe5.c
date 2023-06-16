#include <stdio.h>

void findSmallestLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;
    int i, j, digit;
    int isValid = 1;

    for (i = 0; i < n; i++) {
        int currentNumber = numbers[i];
        
        while (currentNumber > 0) {
            digit = currentNumber % 10;

            if (digit < smallestDigit)
                smallestDigit = digit;

            if (digit > largestDigit)
                largestDigit = digit;

            currentNumber /= 10;
        }
        
        if (smallestDigit == largestDigit)
            isValid = 0;
    }
    
    if (isValid)
        printf("Smallest Digit: %d\nLargest Digit: %d\n", smallestDigit, largestDigit);
    else
        printf("Not Valid\n");
}

int main() {
    int n = 3;
    int numbers[] = {8, 156, 123450};

    findSmallestLargestDigits(n, numbers);

    return 0;
}
