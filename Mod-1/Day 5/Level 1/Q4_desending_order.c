#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortStructures(struct Student* students, int size) {
    struct Student temp;
    
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

void displayStructures(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    struct Student students[5] = {
        {1001, "Aron", 80.5},
        {1002, "Beth", 90.0},
        {1003, "Charlie", 75.3},
        {1004, "David", 88.2},
        {1005, "Emma", 92.7}
    }; // Array of structures

    int size = sizeof(students) / sizeof(students[0]);

    // Sort the array of structures based on marks in descending order
    sortStructures(students, size);

    // Display the sorted array of structures
    displayStructures(students, size);

    return 0;
}
