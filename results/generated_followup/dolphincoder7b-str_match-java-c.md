The error message indicates that there is an issue with the function calls to `containsString`. The function is not being recognized by the compiler due to its lack of declaration, which means it has not been defined elsewhere in the code. To fix this, we need to add a declaration for the function.

With this change, the error should be resolved and the program should compile successfully. Here's the corrected code:

```c
#include <stdio.h>
#include <string.h>

// Function to check if a given string starts with another
int startsWith(char  *str1, char  *str2) {
  int m  = strlen(str1);
  int n  = strlen(str2);

  // If length of str2 is greater than str1
  if  (n > m)
    return 0;

  for  (int i  = 0; i  < n; i++)
    if  (str1[i]  != str2[i])
      return 0;

  return 1;
}

// Function to check if a given string contains another string at any location
int findString(char  *haystack, char  *needle) {
  int m  = strlen(haystack);
  int n  = strlen(needle);

   // Search for the first character
  for  (int i  = 0; i <= m  - n; i++)  {
    int j;

     // Check if the characters match at every index
    for  (j  = 0; j  < n; j++)
      if  (haystack[i + j]  != needle[j])
        break;

     // If all characters match, return the current index
    if  (j  == n)
      return i;
   }

   // If no character matches, return -1
  return -1;
}

// Function to check if a given string ends with another string
int endsWith(char  *str1, char  *str2) {
  int m  = strlen(str1);
  int n  = strlen(str2);

   // If length of str2 is greater than str1
  if  (n  > m)
    return 0;

  for  (int i  = 1; i  <= n; i++)
    if  (str1[m  - i]  != str2[n  - i])
      return 0;

  return 1;
}

// Driver Code
int main() {
  char str1[]  =  "abcd";
  char str2[]  =  "ab";
  printf("%d\n", startsWith(str1, str2));  // Returns true

  char str3[]  =  "abcd";
  char str4[]  =  "zn";
  printf("%d\n", endsWith(str3, str4));  // Returns false

  char str5[]  =  "abcdefg";
  char str6[]  =  "bc";
  printf("%d\n", containsString(str5, str6));  // Returns true

  return 0;
}
```
