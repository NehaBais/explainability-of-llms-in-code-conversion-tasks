Certainly! Here's the converted code in C:

```c
#include <string.h>
#include <stdio.h>

int main( ) {
   char original[ ] = "Mary had a X lamb." ;
   char toBeReplaced[ ] = "X" ;
   char replacement[ ] = "little" ;
   char newString[ ] ;

   int index = strstr( original, toBeReplaced ) ;

   if ( index != -1 ) {
      strncpy( newString, original, index ) ;
      strncat( newString, replacement, strlen(replacement) ) ;
      strncat( newString, original + index + 1, strlen(original) - index - 1 ) ;
   } else {
      strcpy( newString, original ) ;
   }

   printf( "String after replacement: %s\n", newString ) ;

   return 0 ;
}
```

In this code, we have used the C standard library functions to perform the string replacement. The `strstr` function is used to find the index of the character sequence that needs to be replaced, and the `strncpy`, `strncat`, and `strlen` functions are used to create a new string with the desired replacement.

Note that this code assumes that the character sequence to be replaced is a single character, which may not always be the case in real-world scenarios. In such cases, you may need to use a more sophisticated string replacement algorithm, or even a third-party library, to handle the task more accurately.
