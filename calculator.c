#include <stdio.h>

int main() {
  int num1, num2, choice;
  printf("Calculator program started.\n");

  printf("Enter number 1: ");
  scanf("%d", &num1);
  printf("Enter number 2: ");
  scanf("%d", &num2);

  printf("Choose operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
  scanf("%d", &choice);

  switch(choice) {
    case 1:
      printf("Result: %d", num1 + num2);
      break;
    case 2:
      printf("Result: %d", num1 - num2);
      break;
    case 3:
      printf("Result: %d", num1 * num2);
      break;
    case 4:
      if(num2 != 0)
        printf("Result: %.2f", (float)num1 / num2);
      else
        printf("Error: Division by zero is not allowed.");
      break;
    default:
      printf("Invalid operation selected.");
  }

  return 0;
}