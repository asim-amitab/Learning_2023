#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int a[] = {1, 2, 3, 4, 5};
  int n = sizeof(a) / sizeof(a[0]);

  for (int i = 0; i < n; i += 2) {
    swap(&a[i], &a[i + 1]);
  }

  for (int i = 0; i < n; i++) {
    printf("%d ", a[i]);
  }

  printf("\n");

  return 0;
}
