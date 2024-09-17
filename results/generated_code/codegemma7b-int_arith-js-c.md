```c
#include <stdio.h>

int main(int argc, char *argv[]) {
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);

  int sum = a + b;
  int difference = a - b;
  int product = a * b;
  int division = a / b;  // Division rounds towards zero
  int remainder = a % b;  // Remainder has the same sign as the dividend

  printf("a + b = %d\n", sum);
  printf("a - b = %d\n", difference);
  printf("a * b = %d\n", product);
  printf("a / b = %d\n", division);
  printf("a % b = %d\n", remainder);

  return 0;
}
```

**Explanation:**

* The code includes the necessary header file `<stdio.h>` for input and output operations.
* The `main` function takes two command-line arguments (integers `a` and `b`) using `argv` array.
* The variables `sum`, `difference`, `product`, `division`, and `remainder` are declared to store the calculated values.
* The division operator `/` in C always rounds towards zero.
* The remainder operator `%` returns the remainder with the same sign as the dividend.
* The `printf` statements are used to display the results with appropriate formatting.

**Example Usage:**

```
$ ./a.out 10 5
a + b = 15
a - b = 5
a * b = 50
a / b = 2
a % b = 0
```
