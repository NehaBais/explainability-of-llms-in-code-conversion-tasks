In C, string manipulation is a bit different from C++ because C doesn't support the same level of abstractions for strings as C++. Here's how you can achieve similar functionality in C:

```c
#include <stdio.h>
#include <string.h>

int main() {
   char s[20] = "hello"; // The size of the array is crucial to prevent buffer overflow
   printf("%s literal\n", s);
   
   // Create another string variable whose value is the original variable concatenated with another string literal.
   char s2[30]; 
   strcpy(s2, s);  // copy contents of s to s2
   strcat(s2, " literal"); // append "literal" to s2
   printf("%s\n", s2);
   return 0;
}
```

Here the `strcpy` and `strcat` functions are used. The first one is for copying string, second one is for concatenating strings in C. String literals are treated just like any other regular character array in C.
