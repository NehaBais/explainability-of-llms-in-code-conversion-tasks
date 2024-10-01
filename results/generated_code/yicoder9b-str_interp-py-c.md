In C language, string manipulation and interpolation is more complex than in Python as there are no built-in features to handle this directly like formatted strings in Python. Here you will need to use the `sprintf()` function for this purpose:

Here's a possible conversion of your given code snippet from Python to C:
```c
#include <stdio.h> 

int main() {
    char extra[] = "little";
    char new_str[50]; // size should be large enough for the resulting string
    sprintf(new_str, "Mary had a %s lamb.", extra);
    printf("%s\n", new_str); 
    return 0;
}
```
Please note that in C language you have to manually allocate memory according to the requirements and take care of string formatting issues since there are no direct features for this like in Python. Also keep in mind to handle array size appropriately based on your expected output's length.
