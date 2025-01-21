The error occurred because the C compiler does not know that `printf` and `scanf` are standard library functions that need to be included, so it is giving an implicit function declaration error. The fix for this error is to include the header files `<stdio.h>` in the first two lines of the code. Here's the corrected code:
```c
#include 
#include 
 
int main() {
  int n1, n2;
  printf("Enter number: ");
  scanf("%d", &n1);
  printf("Enter number: ");
  scanf("%d", &n2);
  if (n1 < n2) {
    printf("%d is less than %d.", n1, n2);
  } else if (n1 == n2) {
    printf("%d is equal to %d.", n1, n2);
  } else {
    printf("%d is greater than %d.", n1, n2);
  }
  return 0;
}
```
The C compiler now knows that `printf` and `scanf` are standard library functions that need to be included in the code.

