Here's the C code that implements the three string matching operations using the Python library functions:
```c
#include 
#include 
int main() {
 char str1[] = "abcd";
 char str2[] = "ab";
 char str3[] = "zn";
 int i;
 
 // Determine if str1 starts with str2
 printf("%d", !strcmp(str1, str2));
 
 // Determine if str1 contains str2 at any location
 for (i = 0; i <= strlen(str1) - strlen(str2); i++) {
 if (!strcmp(&str1[i], str2)) {
 printf("Match found at position %d", i);
 break;
 }
 }
 
 // Determine if str1 ends with str3
 printf("%d", !strcmp(str1, str3));
 
 return 0;
}
```
In this code, we use the `strcmp()` function to compare two strings for equality. The exclamation mark (`!`) is used to invert the result of the comparison. For example, `!strcmp(str1, str2)` will return non-zero if `str1` does not start with `str2`, and zero otherwise.
For part 2, we use a `for` loop to iterate over all possible starting positions in `str1`. At each position, we compare the substring starting at that position with `str2`. If a match is found, we print the location of the match and break out of the loop.
For part 3, we use the `strcmp()` function again to compare `str1` and `str3`.

