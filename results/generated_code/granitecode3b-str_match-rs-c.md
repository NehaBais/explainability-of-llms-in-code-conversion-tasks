Here's the equivalent C code for the given Rust code:
```
#include 
int main() {
 char s1[] = "abcd";
 char s2[] = "abab";
 char s3[] = "ab";
 
 // Determining if the first string starts with second string
 assert(strstr(s1, s3));
 // Determining if the first string contains the second string at any location
 printf("%d", strstr(s1, s3) != NULL);
 // Print the location of the match 
 printf("Found match at pos %zu", strstr(s1, s3) - s1);
 // Determining if the first string ends with the second string
 assert(strcmp(strrchr(s2, 'b'), "ab"));
 
 return 0;
}
```
In this C code, we use the `strstr()` function to search for the first string in the second string and return a pointer to the first occurrence of the second string. We then use the `strcmp()` function to compare the resulting substring with the third string and print whether they match or not. The `strrchr()` function is used to find the last occurrence of the third string in the second string, which we can then compare with the third string using `strcmp()`.

