The error message indicates that the symbol `main`, which is the entry point for any C program, was not found when linking the executable file. 

In order to fix this issue, you must define a main function in your code. In C, all programs must have a function called "main". This is where execution of the program begins.

Here's how the corrected code looks like:
```c
#include <math.h>
#include <stdio.h>

void factors(long n) {
  printf("%ld ", n);
  printf("1 ");
  for (long test = n - 1; test >= sqrtl(n); test--) {
    if (n % test == 0) {
      printf("%ld ", test);
      printf("%ld ", n / test);
    }
  }
}

int main() {
 long num;
 printf("Enter a positive integer: ");
 scanf("%ld", &num);
 factors(num); 
 return 0;
}
```
