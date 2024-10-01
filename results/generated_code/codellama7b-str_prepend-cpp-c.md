 Here is the code in C:
```
#include <stdio.h>
#include <stdlib.h>

int main() {
   char *myStrings[] = {"prepended to", "my string"};
   char prepended[1024];
   prepended[0] = '\0';
   for (int i = 0; i < sizeof(myStrings) / sizeof(myStrings[0]); i++) {
      strcat(prepended, myStrings[i]);
   }
   printf("%s\n", prepended);
   return 0;
}
```
Note that in C++, the standard library has a `std::string` class that can be used to handle strings. In this code, we are using an array of string literals, which is equivalent to creating a vector of strings in C++. In order to prepend the strings together, we use the `std::accumulate()` function, which takes the beginning and end iterators of the vector, as well as an initial value (in this case, an empty string), and applies the given function (in this case, concatenation) to each element in the range. Finally, we print the resulting string using `std::cout`.

In C, we use a character array instead of a vector, and we must manually append the strings together using the `strcat()` function. We also have to manage memory allocation for the resulting string ourselves, which can be done using `malloc()`. In this case, we allocate 1024 bytes for the result string, which should be large enough to hold the concatenated string.

Also, in C++, the `std::cout` statement is used to print the resulting string to the console, while in C, we use `printf()` function to print the resulting string.
