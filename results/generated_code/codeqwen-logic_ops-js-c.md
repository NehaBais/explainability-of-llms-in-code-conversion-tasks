In C programming language, the equivalent code would look like this.

Note that unlike JavaScript, in C there are no built-in operators for `&&`, `||`, and `!`. So we use the keywords `and`, `or`, and `not` instead.

```c
#include<stdio.h>

void logic(int A, int B) {
  printf("A AND b: %d\n", A && B);
  printf("A OR b: %d\n", A || B);
  printf("NOT a: %d\n", !A);
}

int main() {
  logic(1, 0);  // replace 1 and 0 with your boolean values
  return 0;
}
```

In the C code above `logic` function takes two integer arguments A and B. It will perform the following operations:

- Perform "AND" operation between A and B by checking if both are non-zero, it returns 1 if true else 0.
  
- Perform "OR" operation between A and B by checking if either one of them is non-zero, it returns 1 if true else 0.

- Perform "NOT" operation on A by negating its value, if A is non-zero then the result will be 0 and if A is zero then the result will be 1.

Finally, we call `logic` function in `main` with provided boolean values.
