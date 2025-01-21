Error explanation:
The errors are occurring because of incorrect syntax or missing brackets, parentheses, or braces where necessary.

Fix explanation:
To fix these issues, we need to correct the syntax, add missing brackets, parentheses, or braces where necessary.

Corrected code block:
```c
#include 
#include 
#include 

int main() 
{

  char str1[6] = "abcd";
  char str2[3] = "ab";
  int loc;

  // Checking if the first string starts with the second string
  if (strncmp(str1, str2, strlen(str2))) {
    printf("The first string starts with the second string\n");
  }

  // Checking if the first string contains the second string at any location
  for (loc = 0; loc < strlen(str1) - strlen(str2) + 1; loc++) {
    if (strncmp(str1 + loc, str2, strlen(str2))) == 0) {
        printf("The first string contains the second string at any location\n");
        break;
    }
  }

  // Checking if the first string ends with the second string
  if (strncmp(str1 + strlen(str1) - strlen(str2), str2, strlen(str2))) == 0) {
    printf("The first string ends with the second string\n");
  }

  return 0;
}
```
