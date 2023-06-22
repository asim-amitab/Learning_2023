#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStructures(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    struct Student students[5]; // Array of structures

    // Display all members in the array of structures
    displayStructures(students, 5);

    return 0;
}
