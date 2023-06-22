#include <stdio.h>

int findSmallestDigit(int num);
int findLargestDigit(int num);

int main() {
    int n, num, smallest, largest;
    
    // Accept the number of inputs from the user
    printf("Enter the number of inputs: ");
    scanf("%d", &n);
    
    // Initialize the smallest and largest digits
    smallest = 9;  // Start with a maximum value
    largest = 0;   // Start with a minimum value
    
    // Accept the numbers from the user and find smallest/largest digits
    for (int i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        
        // Find the smallest digit in the current number
        int smallestDigit = findSmallestDigit(num);
        
        // Find the largest digit in the current number
        int largestDigit = findLargestDigit(num);
        
        // Update the smallest and largest digits if necessary
        if (smallestDigit < smallest) {
            smallest = smallestDigit;
        }
        if (largestDigit > largest) {
            largest = largestDigit;
        }
    }
    
    // Print the smallest and largest digits
    printf("Smallest digit: %d\n", smallest);
    printf("Largest digit: %d\n", largest);
    
    return 0;
}

// Function to find the smallest digit in a number
int findSmallestDigit(int num) {
    int smallest = 9;  // Start with a maximum value
    
    while (num > 0) {
        int digit = num % 10;  // Get the last digit
        
        // Update the smallest digit if necessary
        if (digit < smallest) {
            smallest = digit;
        }
        
        num /= 10;  // Remove the last digit
    }
    
    return smallest;
}

// Function to find the largest digit in a number
int findLargestDigit(int num) {
    int largest = 0;  // Start with a minimum value
    
    while (num > 0) {
        int digit = num % 10;  // Get the last digit
        
        // Update the largest digit if necessary
        if (digit > largest) {
            largest = digit;
        }
        
        num /= 10;  // Remove the last digit
    }
    
    return largest;
}
