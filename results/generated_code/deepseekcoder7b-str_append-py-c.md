Sure, here is the equivalent C code for your Python snippet:

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "12345678";   // Creating a string variable and initializing it with some value
    strcat(str, "9!");          // Appending another string to our previously created string
    printf("%s\n", str);        // Print the new string 

    return 0;                   
}
```

In C, we use `strcat()` function from `string.h` library to concatenate or append one string to another. After this operation, our result will be saved back in original variable as strings are passed by reference not value in c unlike python where they pass by object references.  Finally, the string gets printed with `printf` statement which is very similar to how we print in python (`print()` function).

