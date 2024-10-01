The equivalent C code for the given Python code would look like this:

```c
#include <stdio.h>

int main() {
   char extra[] = "little";
   char original[] = "Mary had a %s lamb.";
   char new_str[100];

   sprintf(new_str, original, extra);

   printf("%s", new_str);
   
   return 0;
}
```

This C code is doing the following:

1. Including stdio.h header file which contains functions for input and output operations.
2. Defining two character arrays: "extra" to store the value "little", and "original" to store the original string with placeholder "%s".
3. Creating a new character array "new_str" to hold the interpolated result.
4. Using the sprintf function to format the new_str with the values from original (which includes a placeholder for a string) and extra (the value of the variable). This replaces the "%s" in the original string with the content of "extra". 
5. Finally, printing out the interpolated result.

Please note that C does not have a built-in feature to perform string interpolation like Python's f-strings. So we use sprintf which is more flexible and powerful way to format strings.
