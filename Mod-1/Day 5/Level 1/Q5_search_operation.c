#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchByName(struct Student* students, int size, const char* searchName) {
    int found = 0;

    for (int i = 0; i < size; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n\n", students[i].marks);
            found = 1;
        }
    }

    if (!found) {
        printf("Student not found.\n");
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

    char searchName[20];
    printf("Enter the name of the student to search: ");
    scanf("%s", searchName);

    // Perform search operation based on the name of the student
    searchByName(students, size, searchName);

    return 0;
}
