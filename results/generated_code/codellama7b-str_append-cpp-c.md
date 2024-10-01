 This code is in C++ and needs to be converted to C.

Here's the conversion:

```c
#include <string.h>
#include <stdio.h>

int main( ) {
   char greeting[12];
   strcpy(greeting,"Hello");
   strcat(greeting, " , world!");
   printf("%s\n",greeting);
   return 0;
}
```
Note that in C++, the std::string class is used to represent strings. In C, we use char arrays or pointers to store strings. The std::string class has a member function called append() that allows us to add new characters to an existing string. However, in C, we need to use the strcat() function to concatenate two strings.
Also note that in C++, the << operator is used for formatted output, which requires the inclusion of the iostream header file. In C, we use the printf() function for formatted output and the inclusion of the stdio.h header file.
