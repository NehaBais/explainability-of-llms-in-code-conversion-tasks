 The C++ code can be converted to C by using `char` pointers instead of the string class. Here's how you could convert it:

```c
#include <stdio.h>
#include <string.h>

int main() {
   char s[10];  // assuming that "hello" won't exceed 8 characters plus null-terminator
   strcpy(s, "hello");
   printf("%s literal\n", s);
   
   // Note: strcat requires a destination string with enough space to hold the concatenated string.
   char s2[10];
   strcpy(s2, s);
   strcat(s2, " literal");
   printf("%s\n", s2);
   
   return 0;
}
```

This C code does the same thing as the original C++ code. It first defines a string variable `s` and sets it equal to the text value `"hello"`. Then, it prints out the content of `s`, concatenates `" literal"` to `s`, and prints the result. 

Please note that `strcpy()` function copies the source string to the destination string, while `strcat()` appends the source string to the destination string. The size of destination array should be enough to hold the whole combined string including null-terminator. This is why we have assumed a size for the char arrays. If you are dealing with large strings and/or unpredictable input lengths, you would need to dynamically allocate memory using `malloc`/`calloc`, or use some kind of data structure that supports resizing, like `std::vector`.
