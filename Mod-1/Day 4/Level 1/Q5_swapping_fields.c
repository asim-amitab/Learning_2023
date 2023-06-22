#include <stdio.h>

// Structure definition
struct Point {
    int x;
    int y;
};

// Function to swap fields of two structures using pointers
void swapFields(struct Point* ptr1, struct Point* ptr2) {
    // Swap the x coordinates
    int temp = ptr1->x;
    ptr1->x = ptr2->x;
    ptr2->x = temp;

    // Swap the y coordinates
    temp = ptr1->y;
    ptr1->y = ptr2->y;
    ptr2->y = temp;
}

int main() {
    // Create two structures
    struct Point point1 = {10, 20};
    struct Point point2 = {30, 40};

    // Display original values
    printf("Before swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    // Swap the fields of the structures
    swapFields(&point1, &point2);

    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    return 0;
}
