#include <stdio.h>

// Structure definition for a box
struct Box {
    double length;
    double width;
    double height;
};

// Function to calculate the volume of a box
double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

// Function to calculate the total surface area of a box
double calculateSurfaceArea(struct Box* box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    // Create a box structure and initialize its members
    struct Box myBox;
    myBox.length = 10.0;
    myBox.width = 5.0;
    myBox.height = 3.0;

    // Create a pointer to the box structure
    struct Box* boxPtr = &myBox;

    // Calculate the volume and surface area using the structure pointer with (*) and (.) operators
    double volume = (*boxPtr).length * (*boxPtr).width * (*boxPtr).height;
    double surfaceArea = 2 * ((*boxPtr).length * (*boxPtr).width + (*boxPtr).length * (*boxPtr).height + (*boxPtr).width * (*boxPtr).height);

    // Calculate the volume and surface area using the structure pointer with (->) operator
    double volumePtr = boxPtr->length * boxPtr->width * boxPtr->height;
    double surfaceAreaPtr = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);

    // Print the results
    printf("Volume (using (*), .): %.2f\n", volume);
    printf("Total Surface Area (using (*), .): %.2f\n", surfaceArea);
    printf("Volume (using ->): %.2f\n", volumePtr);
    printf("Total Surface Area (using ->): %.2f\n", surfaceAreaPtr);

    return 0;
}
