Sure! Here's the equivalent C code for the given Rust function:
```c
#include 
int main() {
   int a = 1, b = 1;
   printf("a && b -> %d", a && b);
   printf("n");
   printf("a || b -> %d", a || b);
   printf("n");
   printf("a ^ b -> %d", a ^ b);
   printf("n");
   printf("!a -> %d", !a);
   return 0;
}
```
The equivalent C code is shown above. The main function initializes two variables `a` and `b` with the boolean values `1` or `0`, depending on whether the arguments are true or false, respectively. Then, it uses the logical operators to compute the results of "and", "or", and "xor" on `a` and `b`, and prints them using `printf`. The expression `!a` computes the "not" of `a`.

