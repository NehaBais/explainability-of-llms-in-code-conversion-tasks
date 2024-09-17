Below is the C equivalent of your Java code:

```c
#include<stdio.h>

void bitwise(int a, int b){
    printf("a AND b: %d\n", (a & b));
    printf("a OR b: %d\n", (a | b));
    printf("a XOR b: %d\n", (a ^ b));
    printf("NOT a: %d\n", ~a);
    printf("a << b: %d\n", (a << b)); // left shift
    printf("a >> b: %d\n", (a >> b)); // arithmetic right shift
    printf("a >>> b: %d\n", (unsigned int)a >> b); // logical right shift
}

int main(){
    bitwise(10, 2);
    return 0;
}
```

Please note the following:

- The `~` operator in Java is equivalent to `-1 - num` in C.
- The unsigned shift (`>>>`) can be done by casting your int to an unsigned int: `(unsigned int)a >> b`.
- Rotate operations are not natively supported in C. If you want to implement them, you might need to manually move the bits around.
  
Remember that C does not have built-in functionality for rotate operations like Java's `Integer.rotateLeft` and `Integer.rotateRight`. If you need these functionalities, you will have to implement them manually, or use a library that provides them. 

Also note that in your original Java code, if b is larger than the number of bits available, it would result in a negative value for the shifts. In C, however, shifting by values greater than the number of bits available does not throw an error; instead, it simply repeats the pattern of the higher order bit.

This example is written to be as close as possible to your original Java code, but it may require adjustments depending on the specifics of your use case and environment.
