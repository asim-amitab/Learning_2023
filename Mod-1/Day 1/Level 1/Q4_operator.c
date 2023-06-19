#include <stdio.h>

int main() {
  float num1, num2;
  char op;

  printf("Enter Number1: ");
  scanf("%f", &num1);

  printf("Enter the operator: ");
  scanf(" %c", &op);

  printf("Enter Number2: ");
  scanf("%f", &num2);

  float result;
  switch (op) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator!");
      return 1;
  }

  printf("The result is: %.2f\n", result);

  return 0;
}
