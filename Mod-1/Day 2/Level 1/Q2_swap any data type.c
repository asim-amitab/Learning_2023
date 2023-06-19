#include <stdio.h>

void swap(void *a, void *b) {
  // Get the pointers to the two variables.
  void *temp = a;
  a = b;
  b = temp;
}

int main() {
  int a = 10;
  int b = 20;

  // Swap the values of a and b.
  swap(&a, &b);

  // Print the values of a and b.
  printf("a = %d\n", a);
  printf("b = %d\n", b);

  return 0;
}
