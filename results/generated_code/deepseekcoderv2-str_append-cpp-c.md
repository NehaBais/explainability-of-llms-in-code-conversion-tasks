Answer: The C++ code is already written in a way that it is compatible with the C language. So we can directly convert this piece of C++ code to an equivalent C program as follows:
```c
#include <stdio.h>
int main( ) {
   char greeting[] = "Hello" ;
   strcat(greeting, ", world!");
   puts( greeting );
   return 0;
}
```