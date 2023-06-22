#include <stdio.h>

int findLargestNumberByDeletingDigit(int number) {
    int maxNumber = -1;
    int originalNumber = number;

    for (int i = 0; i < 4; i++) {
        int newNumber = 0;
        int multiplier = 1;

        for (int j = 0; j < 4; j++) {
            if (j != i) {
                int digit = number % 10;
                newNumber += digit * multiplier;
                multiplier *= 10;
            }
            number /= 10;
        }

        if (newNumber > maxNumber) {
            maxNumber = newNumber;
        }
    }

    if (maxNumber == -1) {
        maxNumber = originalNumber;
    }

    return maxNumber;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largestNumber = findLargestNumberByDeletingDigit(number);

    printf("Largest number by deleting a single digit: %d\n", largestNumber);

    return 0;
}
