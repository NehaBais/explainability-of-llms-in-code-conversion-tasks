#include <stdio.h>

int main() {
  int num1, num2;
  char buffer[256]; // to store user input temporarily

  printf("Enter the first integer: ");
  fgets(buffer, 256, stdin);   // get user input into a string
  sscanf(buffer, "%d", &num1); // convert that string to an int

  printf("Enter the second integer: ");
  fgets(buffer, 256, stdin);
  sscanf(buffer, "%d", &num2);

  if (num1 == num2) {
    printf("%d equals %d\n", num1, num2);
  } else if (num1 < num2) {
    printf("%d is less than %d\n", num1, num2);
<｜begin▁of▁sentence｜>
  } else {
    printf("%d is greater than %d\n", num1, num2);