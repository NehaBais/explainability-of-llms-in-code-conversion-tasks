Here is the code converted to C:
```c
#include 
#include 
int main() {
 char str[] = "abcdefgh";
 int n = 2;
 int m = 3;
 
 //  * starting from n characters in and of m length;
 printf("%s", substr(str, n, m)); // => "cde"
 
 //  * starting from n characters in, up to the end of the string;
 printf("%s", substr(str, n, strlen(str) - n + 1)); // => "cdefgh"
 printf("%s", substring(str, n)); // => "cdefgh"
 
 //  * whole string minus last character;
 printf("%s", substring(str, 0, strlen(str) - 1)); // => "abcdefg"
 
 //  * starting from a known character within the string and of m length;
 char* b_ptr = strchr(str, 'b');
 if (b_ptr != NULL) {
 printf("%s", substr(b_ptr, 0, m)); // => "bcd"
 }
 
 //  * starting from a known substring within the string and of m length. 
 char* bc_ptr = strstr(str, "bc");
 if (bc_ptr != NULL) {
 printf("%s", substr(bc_ptr, 0, m)); // => "bcd"
 }
 
 return 0;
}
char* substr(char* s, int pos, int len) {
 char* result = (char*)malloc((len + 1) * sizeof(char));
 strncpy(result, s + pos, len);
 result[len] = 0;
 return result;
}
char* substring(char* s, int start, int end) {
 if (start < 0 || end > strlen(s) - 1) {
 printf("Invalid start or end index");
 return "";
 }
 char* result = (char*)malloc((end - start + 2) * sizeof(char));
 strncpy(result, s + start, end - start + 1);
 result[end - start + 1] = 0;
 return result;
}
```
Note: The code uses the `strchr` and `strstr` functions from the C string library to find a known character or substring within the string. It also uses the `strlen` function to get the length of the string. The `substr` function takes three arguments: the string, the starting position (0-based), and the length of the substring. The `substring` function takes two arguments: the string and the start index (0-based).

