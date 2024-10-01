In C language, the equivalent code would be as follows. Also note that there is no direct print function in C like JavaScript. We are using printf to display results on console.

```c
#include <stdio.h> 

void logic(int a, int b) { 
  printf("a AND b: %d\n", a && b); 
  printf("a OR b: %d\n", a || b); 
  printf("NOT a: %d\n", !a); 
} 

int main() {
    logic(1, 0); //example usage where a = true and b = false (in C, non-zero is considered as true)
    return 0;
}
```
Note: In the above code, "&&" stands for logical AND operator in C which returns true if both operands are true. Similarly, "||" means OR operation that returns true if any of the two operands is true and "!" indicates NOT operator which returns true if the operand is false. The function logic is being called from main function as an example usage where a = 1 (true) and b = 0 (false).
