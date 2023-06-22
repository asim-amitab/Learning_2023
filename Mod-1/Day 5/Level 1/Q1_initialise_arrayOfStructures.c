#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    char buffer[100];  // Buffer to store the temporary values
    int i = 0;  // Index for accessing the students array
    int j = 0;  // Index for iterating through the input string

    // Iterate through the input string
    while (input[j] != '\0') {
        // Read the roll number
        int k = 0;
        while (input[j] != ' ') {
            buffer[k++] = input[j++];
        }
        buffer[k] = '\0';
        students[i].rollno = atoi(buffer);

        // Skip the whitespace
        j++;

        // Read the name
        k = 0;
        while (input[j] != ' ') {
            buffer[k++] = input[j++];
        }
        buffer[k] = '\0';
        strcpy(students[i].name, buffer);

        // Skip the whitespace
        j++;

        // Read the marks
        k = 0;
        while (input[j] != '\0' && input[j] != ' ') {
            buffer[k++] = input[j++];
        }
        buffer[k] = '\0';
        students[i].marks = atof(buffer);

        // Skip to the next structure in the array
        i++;
    }
}

int main() {
    char input[100] = "1001 Aron 100.00";  // Example input string
    struct Student students[1];  // Array of structures

    // Call the parseString function to initialize the array of structures
    parseString(input, students, 1);

    // Print the values of the structure
    printf("Roll No: %d\n", students[0].rollno);
    printf("Name: %s\n", students[0].name);
    printf("Marks: %.2f\n", students[0].marks);

    return 0;
}
