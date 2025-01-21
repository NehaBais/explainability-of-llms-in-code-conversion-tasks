The error message indicates that the compiler is unable to find the header file or declare the functions 'printf' and 'puts'. The missing libraries can be resolved by adding '-lm' flag to the compilation command in C. 

Here's how you correct the code:

1. Add -lm to the compilation command, like this:
   ```c
   gcc -o main main.c -lm
   ```

2. Make sure that 'printf.h', 'stdbool.h', and 'stdio.h' are included before any function call. Here's how you do it:
   ```c
   #include <stdio.h>
   #include <stdbool.h>

   void boolean_ops(bool a, bool b)  {
       printf("%d and %d   ->   ", a, b);
       puts((a && b) ? "true" : "false");

       printf("%d or %d   ->   ", a, b);
       puts((a || b) ? "true" : "false");

       printf("%d xor %d   ->   ", a, b);
       puts((a ^ b) ? "true" : "false");

       printf("not %d   ->   ", a);
       puts(!a ? "true" : "false");
   }

   int main()  {
       boolean_ops(1, 1);
       boolean_ops(1, 0);
       boolean_ops(0, 1);
       boolean_ops(0, 0);

       return 0;
   }
   ```

This is the corrected code in a single code block:
```c
#include <stdio.h>
#include <stdbool.h>

void boolean_ops(bool a, bool b)  {
    printf("%d and %d   ->   ", a, b);
    puts((a && b) ? "true" : "false");

    printf("%d or %d   ->   ", a, b);
    puts((a || b) ? "true" : "false");

    printf("%d xor %d   ->   ", a, b);
    puts((a ^ b) ? "true" : "false");

    printf("not %d   ->   ", a);
    puts(!a ? "true" : "false");
}

int main()  {
    boolean_ops(1, 1);
    boolean_ops(1, 0);
    boolean_ops(0, 1);
    boolean_ops(0, 0);

    return 0;
}
```
