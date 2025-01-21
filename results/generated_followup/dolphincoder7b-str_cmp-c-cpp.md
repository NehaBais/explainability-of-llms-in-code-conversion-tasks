The error occurs because the C++ standard library `string` has not been included, which is necessary for the usage of `std::strcpy()` and `std::strlen()`. To fix this issue, we can include the necessary libraries by adding `#include<string>` before including `<ctype.h>`. Additionally, the missing return statement in the `compare_strings_case_insensitive` function requires an explicit return statement to prevent the compiler from generating any output or warnings.

Here is the corrected code:
```cpp
#include  <ctype.h>
#include  <stdio.h>
#include  <string.h>

int compare_strings(char s1[], char s2[]) {
  if (strcmp(s1, s2) == 0) {
    return 1; // Strings are equal
   } else {
    return 0; // Strings are not equal
   }
}

int compare_strings_case_insensitive(char s1[], char s2[]) {
  int len = strlen(s1);
  char temp[len + 1];

  strcpy(temp, s1);

  for (int i = 0; i < len; i++)
    temp[i] = tolower(temp[i]);

  if (strcmp(temp, s2) == 0) {
    return 1; // Case-insensitive strings are equal
   } else {
    return 0; // Case-insensitive strings are not equal
   }
}
```
