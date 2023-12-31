#include <stdio.h>

int countSetBits(int num) {
    int count = 0;
    
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    
    return count;
}

int main() {
    int arr[] = {5, 12, 9, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int totalSetBits = 0;
    
    for (int i = 0; i < size; i++) {
        totalSetBits += countSetBits(arr[i]);
    }
    
    printf("Total number of set bits: %d\n", totalSetBits);
    
    return 0;
}
