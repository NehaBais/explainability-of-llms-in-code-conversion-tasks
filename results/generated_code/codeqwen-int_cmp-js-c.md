The given code in JavaScript is already written in C. It involves user interaction with console, which isn't exactly possible in a pure command line application, but it works as expected when run in a browser console or Node.js environment.

Here's the JavaScript version of the provided code in C:

```c
#include <stdio.h>

void compare(int A, int B) {
  if (A==B) printf("%d equals %d", A, B);
  if (A < B) printf("%d is less than %d", A, B);
  if (A > B) printf("%d is greater than %d", A, B);
}

int main() {
  int a, B;

  printf("Enter two integers: ");
  scanf("%d %d", &A, &B);
  compare(A, B);

  return 0;
}
```

Note: This C code assumes you're using the standard library `stdio.h`. The scanf() function is used to read input from the user and save it into integer variables A and B. This code does not include error checking for invalid user inputs, but in a real-world application you would want to add that.
