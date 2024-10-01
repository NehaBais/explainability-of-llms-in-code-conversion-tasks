Here is the converted code from C++ to C:
```
#include 
#include 
using namespace std;
int main() {
 char s1[] = "abcd";
 char s2[] = "abab";
 char s3[] = "ab";
 
 // Beginning
 int result1 = strncmp(s1, s3, strlen(s3)) == 0;
 
 // End
 int result2 = strcmp(s1 + strlen(s1) - strlen(s3), s3) == 0;
 
 // Anywhere
 char *loc = strstr(s1, s2);
 if (loc != NULL) {
 printf("String found at location: %ldn", loc - s1);
 } else {
 printf("String not found.n");
 }
 int result3 = loc != NULL;
 
 // Location of match for part 2
 int loc = strstr(s2, s3) - s2;
 if (loc >= 0) {
 printf("Location of match: %dn", loc);
 } else {
 printf("Match not found.n");
 }
 
 return 0;
}
```
In C++, the `string::compare()` method is used to compare two strings, and it returns an integer value indicating whether the first string is less than, equal to, or greater than the second string. In C, we can use the `strncmp()` function to achieve the same result.
For finding the location of a string within another string, in C++ we can use the `find()` method, which returns an iterator pointing to the beginning of the match. In C, we can use the `strstr()` function, which returns a pointer to the first occurrence of the second string in the first string.
In the code, I have also added comments to explain each step and provide additional information for the optional requirements.

