Here's the C code that implements the same functionality as the given Golang code:
```c
#include 
int main(void) {
 const char *s = "ABCDEFGH";
 int n = 2, m = 3;
 
 // for reference
 printf("Index: ");
 for (int i = 0; i < strlen(s); i++) {
 printf("%c", s[i]);
 }
 printf("\n");
 printf("String: %s\n", s);
 
 // starting from n characters in and of m length
 printf("Start %d, length %d:    ", n, m);
 for (int i = n; i < n+m && i < strlen(s); i++) {
 putchar(s[i]);
 }
 printf("\n");
 
 // starting from n characters in, up to the end of the string
 printf("Start %d, to end:      ", n);
 for (int i = n; i < strlen(s); i++) {
 putchar(s[i]);
 }
 printf("\n");
 
 // whole string minus last character
 printf("All but last:         ");
 for (int i = 0; i < strlen(s)-1; i++) {
 putchar(s[i]);
 }
 printf("\n");
 
 // starting from a known character within the string and of m length
 int dx = strchr(s, 'D') - s;
 printf("Start 'D', length %d:  ", m);
 for (int i = dx; i < dx+m && i < strlen(s); i++) {
 putchar(s[i]);
 }
 printf("\n");
 
 // starting from a known substring within the string and of m length
 int sx = strstr(s, "DE") - s;
 printf("Start \"DE\", length %d: ", m);
 for (int i = sx; i < sx+m && i < strlen(s); i++) {
 putchar(s[i]);
 }
 printf("\n");
 
 return 0;
}
```
The C code uses the `strchr` and `strstr` functions from the `<string.h>` header to find the starting index of a character or substring within the string, respectively. The `printf` function is used to output the results, with format specifiers (`%d`) used to print integer values and `%s` used to print strings.

