#include <stdio.h>

int main() {
  int A, B;
  printf("Enter value of A: ");
  scanf("%d", &A);
  printf("Enter value of B: ");
  scanf("%d", &B);

  if (A < B) {
    printf("A is less than B\n");
  } else if (A > B) {
    printf("A is greater than B\n");
  } else {
    printf("A is equal to B\n");
  }

  // Test case for each comparison operator separately
  printf("\nTesting condition for different cases\n");

#define If(condition)                                                          \
  if (condition) {                                                             \
    printf("%s", #condition ": true.\n");                                      \
  } else {                                                                     \
    printf("%s", #condition ": false.\n");                                     \
  }

  If(A < B) If(A == B) If(A > B)

      return 0;
}