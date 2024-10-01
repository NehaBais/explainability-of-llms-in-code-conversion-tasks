Here is the equivalent C code for your Java function:

```C
#include <stdio.h>
#include <math.h>

void factors(long n) {
    printf("%ld ", n);
    printf("1 ");
    for(long test = n - 1; test >= sqrtl(n); test--) {
        if (n % test == 0) {
            printf("%ld ", test);
            printf("%ld ", n / test);
        }
    }
}
```
Please note that C does not have a built-in TreeSet equivalent or the notion of generics in the same way as Java. Thus, we are forced to make certain trade-offs here (e.g., the function prints the factors instead of returning them in some structure). For example, you may want to adjust this code for your specific use case and requirements such as how to handle memory/storage of the factors.
Also note that C does not have automatic garbage collection like Java, so remember to deallocate any dynamically allocated memory after it is no longer needed!

Finally, please make sure to compile above C program with `-lm` option if you are using gcc compiler because we're using math library (`#include <math.h>`).
