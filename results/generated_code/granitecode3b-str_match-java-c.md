Here's the C code that implements the three string matching operations using the functions provided by the C standard library:
```c
#include 
#include 
int main() {
 const char* str1 = "abcd";
 const char* str2 = "ab";
 
 int res1 = strstartswith(str1, str2); // returns 1 (true)
 int res2 = strrchr(str1, 'b') != NULL; // returns 0 (false)
 int res3 = strstr(str1, "ab") != NULL; // returns 1 (true)
 
 printf("startsWith: %d, contains: %d, endsWith: %d", res1, res2, res3);
 return 0;
}
```
The `startswith` function is a built-in function in C that checks if the first string starts with the second string. The `strrchr` function is used to check if the first string ends with the second character. The `strstr` function is used to search for the second string in the first string and returns a pointer to the location of the match, or NULL if it's not found.

