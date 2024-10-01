In C, we can achieve the same result by using dynamic memory allocation, strings and standard library functions. Here's how you can do this:

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* hello = (char *) malloc(12 * sizeof(char)); // Allocate memory for "Hello world"
    strcpy(hello, "Hello world"); // Copy string into allocated memory

    // Append the string variable with another string literal
    strcat(hello, "!!!!");
    
    // Print the contents of the variable after the append operation.
    printf("%s\n", hello);

    free(hello); // Free the allocated memory
    
    return 0;
}
```

In this code:

- We first allocate enough memory to store the string `"Hello world"`.
- Then, we copy the initial string into our newly allocated memory using `strcpy()`. 
- Finally, we use `strcat()` to append "!!!!" to the end of the current string.
- The printf function is used to print out the final result. 
- After usage, the allocated memory is freed to prevent a memory leak. 

Please note that this solution assumes that you've already included the necessary headers (`stdio.h` for input/output functions and `stdlib.h`, `string.h` for dynamic memory allocation and string manipulation).
