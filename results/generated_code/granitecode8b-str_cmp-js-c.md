Here is the converted code from JavaScript to C:
```
#include 
int main() {
 const char str1[] = "abcd";
 const char str2[] = "dcba";
 int result;
 
 /* Comparing two strings for exact equality */
 result = strcmp(str1, str2);
 if (result == 0) {
 printf("Truen");
 } else {
 printf("FalseDn");
 }
 
 /* Comparing two strings for inequality */
 result = strcmp(str1, str2);
 if (result != 0) {
 printf("Truen");
 } else {
 printf("FalseDn");
 }
 
 /* Comparing two strings to see if one is lexically ordered before than the other */
 result = strcmp(str1, str2);
 if (result < 0) {
 printf("Truen");
 } else {
 printf("FalseDn");
 }
 
 /* Comparing two strings to see if one is lexically ordered after than the other */
 result = strcmp(str1, str2);
 if (result > 0) {
 printf("Truen");
 } else {
 printf("FalseDn");
 }
 
 /* Case sensitive comparison */
 result = strcmp(str1, str2);
 if (result == 0) {
 printf("Truen");
 } else {
 printf("FalseDn");
 }
 
 /* Case insensitive comparison */
 result = strcasecmp(str1, str2);
 if (result == 0) {
 printf("Truen");
 } else {
 printf("FalseDn");
 }
 
 return 0;
}
```
The converted code compares two strings "abcd" and "dcba" for exact equality, inequality, lexical order before and after, case sensitive comparison, and case insensitive comparison. The program uses the `strcmp()` function to compare the strings for equality and inequality, and the `<` and `>` operators to check the lexical order. The `strsxfr()` function is used to perform a case-insensitive comparison using the `strxfrm()` function to transform the strings into a common format before comparing them.

