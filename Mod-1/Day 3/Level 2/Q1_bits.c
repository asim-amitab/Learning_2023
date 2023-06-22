#include <stdio.h>

// Function to set a specific bit of an 8-bit number
unsigned char setBit(unsigned char num, int position) {
    return num | (1 << position);
}

// Function to clear a specific bit of an 8-bit number
unsigned char clearBit(unsigned char num, int position) {
    return num & ~(1 << position);
}

// Function to toggle a specific bit of an 8-bit number
unsigned char toggleBit(unsigned char num, int position) {
    return num ^ (1 << position);
}

int main() {
    unsigned char num = 0b01010101; // Example 8-bit number
    
    // Set bit at position 2
    num = setBit(num, 2);
    printf("After setting bit 2: %d\n", num);
    
    // Clear bit at position 5
    num = clearBit(num, 5);
    printf("After clearing bit 5: %d\n", num);
    
    // Toggle bit at position 7
    num = toggleBit(num, 7);
    printf("After toggling bit 7: %d\n", num);
    
    return 0;
}
