Here is the equivalent C code for your given C++ code requirement. This C code uses sprintf function to interpolate a string with variable values and also prints it.

```c
#include <stdio.h>
#include <string.h>

int main(void) { 
   char original[] = "Mary had a X lamb."; 
   char replacement [] = "little";  
   char newString[100];
   strcpy(newString,original); // Copy the original string to new String
   sprintf(newString, "%s%s%s%s", newString, 
           strtok(newString, "X"), replacement, strtok(NULL, "\0"));  
   printf("String after replacement: %s \n", newString);  
   return 0; 
}
```
