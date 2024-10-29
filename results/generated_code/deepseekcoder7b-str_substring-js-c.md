Below is C code that performs similar operations as in JavaScript on a UTF-8 encoded string:

The following function can be used to convert any character from JavaScript to its equivalent Unicode value: `charCodeAt`. This function returns a UTF-16 code unit value (a 2 bytes integer) for the character at the specified index, not necessarily an unicode character point as in JS which may use more than one 8-bit byte per character.

Here is how you can implement these operations in C:

```c
#include <stdio.h>
#include <string.h>

void substr_n_m(char* str, int n, int m) {
    for (int i = n; i < n + m && str[i] != '\0'; ++i)
        printf("%c", str[i]);
    
    printf("\n");
}

void substr_n(char* str, int n) {
    printf("%s\n", &str[n]);
}

void substr_except_last(char* str) {
    printf("%s\n", strndup(str, strlen(str)-1));
}

void substr_known_char_m(char* str, char c, int m) {
    for (int i = 0; i < strlen(str); ++i){
        if(str[i] == c) {
            substr_n_m(str + i, 0, m);
            break;
        }
    }    
}

void substr_known_substring_m(char* str, char* subStr, int m) {
    char *p = strstr(str, subStr);
    if (p != NULL){
        substr_n_m(p, 0, m);
    }    
}

int main() {
   char* str  = "abcdefgh";
   int n = 2;
   int m = 3;
   
   printf("Starting from position %d and length of %d : ",n,m);
   substr_n_m(str, n, m); // => "cde"
   
   printf("From position %d to end: ", n);
   substr_n(str, n);  //=> "cdefgh"
   
   printf("Whole string minus last character : ");
   substr_except_last(str); // => "abcdefg"
   
   char c = 'b';
   printf("From known character '%c' and length of %d: ", c, m);
   substr_known_char_m(str, c, m);  //=> "bcd"
   
   char* subStr = "bc";
   printf("From known substring '%s' and length of %d : ",subStr, m );
   substr_known_substring_m(str, subStr, m);  //=> "bcd"

   return 0;
}
```
Note: C language does not support UTF-8 or UTF-16 encoding as it's a superset of ASCII and doesn’t natively support Unicode. So the provided solution is assuming input string to be in ASCII or compatible encoding, which are subset of unicode. 
UTF handling libraries should be used if you want to work with full range of unicode characters (like UTF-8 encoded data).

