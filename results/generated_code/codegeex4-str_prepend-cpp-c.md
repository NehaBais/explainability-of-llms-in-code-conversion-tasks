C doesn't support string concatenation in the same way C++ does through STL. However, we can achieve the same result by using pointers and memory management functions.

Below is the equivalent code in C:

```c
#include <stdio.h>
#include <stdlib.h>

char* prepend(char** strArr, int length) {
    int totalLength = 0;
    char* prependStr;

    for (int i = 0; i < length; i++) {
        totalLength += strlen(strArr[i]);
    }

    prependStr = (char*)malloc((totalLength + 1) * sizeof(char));
    if (!prependStr) {
        fprintf(stderr, "Memory allocation failed\n");
        return NULL;
    }

    char* tempStr = prependStr;
    for (int i = 0; i < length; i++) {
        strcpy(tempStr, strArr[i]);
        tempStr += strlen(strArr[i]);
    }
    
    *(tempStr) = '\0';

    return prependStr;
}

int main( ) {
   char* myStrings[] = { "prepended to" , "my string" } ;
   char* prepended = prepend(myStrings, 2);
   if (prepended != NULL) {
      printf("%s\n", prepended);
      free(prepended);
   }
   return 0;
}
```

In this code, we declare a `prepend` function that takes an array of strings and its length. It calculates the total length of all strings in the array, allocates enough memory to hold the concatenated string, and then copies each string into the allocated memory one after the other.

Note: The above code does not include error checking for failed memory allocations, so please consider adding proper error handling as per your requirements.
