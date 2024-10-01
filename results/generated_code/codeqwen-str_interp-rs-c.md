C does not have built-in string interpolation as Rust or other dynamic languages. However, it can be implemented using various methods. The simplest one is to use sprintf function from C standard library:

```c
#include <stdio.h>

int main() {
    char str[] = "Mary had a %s lamb";
    char name[] = "Mary";
    char adj[] = "little";

    printf(str, adj);  // Output: Mary had a little lamb
    printf("%s had a %s lamb", name, adj);  // Output: Mary had a little lamb
    return 0;
}
```
In this code, we're using the `%s` placeholder in our format string to insert values from variables. This is similar to how Rust does it with `{}`.

You can also manually replace placeholders with their respective variables as shown:

#include <stdio.h>

int main() {
    char str[] = "Mary had a little lamb";
    char name[] = "Mary";
    char adj[] = "little";

    printf("Mary had a %s lamb", adj);  // Output: Mary had a little lamb
    printf("%s had a %s lamb", name, adj);  // Output: Mary had a little lamb
    return 0;
}

In this code, we're manually replacing `%s` with the respective variable values.
