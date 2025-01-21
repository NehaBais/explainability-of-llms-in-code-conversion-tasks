The error occurs because strstr returns a pointer to the first occurrence of string2 in string1, not an index position. In C++ (not C), we use find() method which returns an iterator pointing to the first element in the range [first,last) that matches the given expression or last if no such elements are found.
To fix this error, we should change our approach. We can use strstr and compare it with NULL because when it finds a match, it will return the address of the first character in string2 within string1. If there is no match, it will return NULL. So, we can modify our code to check if pos is not NULL before using it.
Here is the updated C version of your code:
```c
#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

int main() {
   char original[] = "Mary had a X lamb.";
   char toBeReplaced[] = "X";
   char replacement[] = "little";

   char *newString;
   int len, pos_len;

   len = strlen(original);
   newString = (char  *)malloc((len + 1)  * sizeof(char));

   if ((pos = strstr(original, toBeReplaced)) != NULL) {
      strncpy(newString, original, pos - original);
      newString[pos - original] = '\0';
      strcat(newString, replacement);
      strcat(newString, &original[pos + strlen(toBeReplaced)]);
   } else  {
      strcpy(newString, original);
   }

   printf("String after replacement: %s \n", newString);

   free(newString);
   return 0;
}
```
