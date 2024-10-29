Below is the equivalent C code for your Java requirements. In addition, some changes have been made to make it simpler and more intuitive in nature. This code uses standard libraries such as string.h (for functions like strncmp(), strstr()) and stdio.h (for printf()):

```C
#include <stdio.h>
#include <string.h>

int main(void) {
  // Check if the first string starts with second string
  const char* s1 = "abcd";
  const char* s2 = "abc";
  int startWith = strncmp(s1, s2, strlen(s2));
  printf("startsWith: %d\n", startWith == 0); // returns true (non-zero) if strings are the same

  // Check if the first string contains the second string at any location
  const char* s3 = "abcd";
  const char* s4 = "bcd";
  char *found = strstr(s3, s4);
  printf("contains: %d\n", found != NULL); // returns true (non-zero) if substring is found
  if (found != NULL) {
    printf("location of match for contains: %ld\n", found - s3);
  }

  // Check if the first string ends with second string
  const char* s5 = "abcd";
  const char* s6 = "bcd";
  int endWith = strncmp(s5 + strlen(s5) - strlen(s6), s6, strlen(s6));
  printf("endsWith: %d\n", endWith == 0); // returns true (non-zero) if strings are the same
  
  return 0;
}
```
This program checks whether `s1` starts with `s2` using the strncmp function which compares two strings up to n characters. It then prints a number that represents truth value - zero means string is equal, non-zero - not.

For contains operation it uses strstr which locates the first occurrence of string s4 in s3. If found it subtracts the start address of s3 from the location of match to get the index. 

To check if `s5` ends with `s6`, we again use strncmp function but this time on end part of `s5`. Again prints a number that represents truth value - zero means string is equal, non-zero - not. It helps us to determine the first string (s1) starts with second string (s2), contains substring and ends with another string (s3).

