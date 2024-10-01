Here's the equivalent code in C:
```c
#include 
#include 
int main() {
 char c[] = "cat";
 char d[] = "dog";
 if (strcmp(c, d) == 0) {
 printf("%s is bytewise identical to %s", c, d);
 }
 if (strcmp(c, d) != 0) {
 printf("%s is bytewise different from %s", c, d);
 }
 if (strcmp(c, d) > 0) {
 printf("%s is lexically bytewise greater than %s", c, d);
 }
 if (strcmp(c, d) < 0) {
 printf("%s is lexically bytewise less than %s", c, d);
 }
 if (strcmp(c, d) >= 0) {
 printf("%s is lexically bytewise greater than or equal to %s", c, d);
 }
 if (strcmp(c, d) <= 0) {
 printf("%s is lexically bytewise less than or equal to %s", c, d);
 }
 // C is not strongly typed and will directly compare a value of string
 // type to a value of numeric type.

 // A case insensitive compare can be done with the strcasecmp() function:
 const char* eqf = "when interpreted as UTF-8 and compared under Unicode simple case folding rules.";
 if (strcasecmp(c, d) == 0) {
 printf("%s equal to %s %s", c, d, eqf);
 } else {
 printf("%s not equal to %s %s", c, d, eqf);
 }

 // C does not have built-in support for Unicode normalization, collation tables, or locale sensitive comparisons. However, there are several third-party libraries available that provide these features, such as the ICU library.
}
``` 
Note that the `strcmp` and `strcasecmp` functions in C are used to compare two strings for equality and case insensitivity respectively. The `printf` function is used to print the output. The `const` keyword is used to declare a constant string.

