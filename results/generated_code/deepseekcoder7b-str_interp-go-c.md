The equivalent code in C would look like this using the `sprintf` function from the standard library (`stdio.h`). However, unlike Go, there is no built-in way to dynamically replace substrings in a string in C so we need to use additional logic including memory allocation:
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *str = "Mary had a %s lamb";
    char *txt = "big"; // you can replace this with any variable or value
    
    size_t str_len = strlen(str);
    size_t txt_len = strlen(txt);
    // allocate memory for the new string
    char* out = malloc(str_len + txt_len + 1); 
    if (out == NULL) { /* check for allocation failure */
        fprintf(stderr, "Memory allocation failed\n");
        return EXIT_FAILURE;
    }
    
    // use sprintf to replace %s placeholder with txt value
    sprintf(out, str, txt); 
    
    printf("%s\n", out);
    
    free(out); // don't forget to free the allocated memory
    return EXIT_SUCCESS;
}
```
Please note that in C we need to manually manage memory allocation/deallocation which is not as convenient as in Go. Also, error checking for malloc is essential in order to prevent a situation where it fails to allocate necessary memory causing program termination. This is also true when using any dynamic data structure or function from the standard library.

