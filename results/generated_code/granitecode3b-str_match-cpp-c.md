Here's the C code that implements the same functionality as the provided C++ code:
```c
#include 
int main() {
 char s1[] = "abcd";
 char s2[] = "abab";
 char s3[] = "ab";
 
 //Beginning
 printf("%d", strncmp(s1, s3, strlen(s3)) == 0);
 
 //End
 printf("n");
 printf("%d", strcmp(s1 + (strlen(s1) - strlen(s3)), s3) == 0);
 
 //Anywhere
 printf("n");
 printf("%d", strstr(s2, s3) != NULL);
 return 0;
}
```
This code uses the `strcmp` function to compare two strings at a specific location and returns an integer value of either 0 or non-zero. A zero value indicates a match, while a non-zero value indicates a mismatch. The `strlen` function is used to get the length of each string. The `strncmp` function is used for substring comparison with a specified length.

