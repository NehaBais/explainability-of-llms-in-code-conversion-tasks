Here's the equivalent C code for the given Golang code snippet:
```c
#include 
#include 
int main() {
 char c[] = "cat";
 char d[] = "dog";
 if (strcmp(c, d) == 0) {
 printf("%s is bytewise identical to %sn", c, d);
 } else {
 printf("%s is bytewise different from %sn", c, d);
 }
 if (strcmp(c, d) > 0) {
 printf("%s is lexically bytewise greater than %sn", c, d);
 } else if (strcmp(c, d) < 0) {
 printf("%s is lexically bytewise less than %sn", c, d);
 } else {
 printf("%s is lexically bytewise equal to %sn", c, d);
 }
 // A case insensitive compare can be done with a function in the strings
 // package in the Go standard library:
 char *eqf = "when interpreted as UTF-8 and compared under Unicode"
 "simple case folding rules.";
 if (strcmp(c, d) == 0) {
 printf("%s equal to %s%sn", c, d, eqf);
 } else {
 printf("%s not equal to %s%sn", c, d, eqf);
 }
 return 0;
}
```
In this C code, we first declare two strings `c` and `d`. We then compare them using the `strcmp` function from the standard library. Depending on the result of the comparison, we print a message indicating whether `c` is equal to or not equal to `d`, and whether `c` is lexically greater than, less than, or equal to `d`.
To demonstrate case insensitive comparisons, we use the `strcmp` function with the `strings.EqualFold` function from the `x/text` package to compare `c` and `d`. This function compares the two strings in a case-insensitive manner.
Finally, we print out an additional message based on whether `c` is equal to or not equal to `d`, along with the result of the `strings.EqualFold` comparison.

