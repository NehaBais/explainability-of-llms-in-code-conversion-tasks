Sure, here is the equivalent C code for your Golang code:

```c
#include <stdio.h>

int main() {
    // text assigned to a string variable
    char* s = "hello";

    printf("%s\n", s); // output string variable
    printf("%s %s\n", s, "literal"); // requested output by original task description

    // allocate memory for new string and concatenate
    char* s2 = (char*) malloc(strlen(s) + strlen(" literal") + 1);
    sprintf(s2, "%s %s", s, "literal"); // sprintf is used to concatenate the strings

    printf("%s\n", s2); // output second string variable
    // do not forget to free dynamically allocated memory 
    free(s2);
    return 0;
}
```

Please note that C does not guarantee the deallocation of dynamically allocated memory. So if you keep this code in a continuous running environment, there will be a memory leak.
