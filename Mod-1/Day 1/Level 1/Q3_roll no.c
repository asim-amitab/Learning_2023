#include <stdio.h>

int main() {
  int roll_no;
  char name[50];
  int marks_physics, marks_math, marks_chemistry;

  printf("Enter the roll number: ");
  scanf("%d", &roll_no);

  printf("Enter the name of the student: ");
  scanf("%s", name);

  printf("Enter the marks of Physics, Math and Chemistry: ");
  scanf("%d %d %d", &marks_physics, &marks_math, &marks_chemistry);

  int total_marks = marks_physics + marks_math + marks_chemistry;
  float percentage = (float)total_marks / 3 * 100;

  printf("Roll No: %d\n", roll_no);
  printf("Name: %s\n", name);
  printf("Marks of Physics: %d\n", marks_physics);
  printf("Marks of Math: %d\n", marks_math);
  printf("Marks of Chemistry: %d\n", marks_chemistry);
  printf("Total Marks: %d\n", total_marks);
  printf("Percentage: %.2f%%\n", percentage);

  return 0;
}
