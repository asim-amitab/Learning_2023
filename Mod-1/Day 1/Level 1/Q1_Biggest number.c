//function to find biggest of 2 numbers using - if else

int find_biggest(int a, int b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}

//function to find biggest of 2 numbers using - ternary operator

#include <stdio.h>

int biggest(int a, int b) {
  return (a > b) ? a : b;
}

int main() {
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  int biggest_number = biggest(a, b);
  printf("The biggest number is %d\n", biggest_number);
  return 0;
}

