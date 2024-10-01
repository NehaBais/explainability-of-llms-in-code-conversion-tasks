Here's the C code that satisfies the requirements you mentioned:
```c
#include 
int main() {
 char s[] = "abcdefgh";
 int n = 2, m = 3;
 char char = 'd';
 char chars[] = "cd";
 
 // starting from n=2 characters in and m=3 in length;
 printf("%s\n", &s[n-1] + (m - 1));
 
 // starting from n characters in, up to the end of the string;
 printf("%s\n", &s[n-1]);
 
 // whole string minus last character;
 printf("%s\n", s);
 
 // starting from a known character char="d" within the string and of m length;
 int indx = strchr(s, char) - s;
 printf("%s\n", &s[indx] + (m - 1));
 
 // starting from a known substring chars="cd" within the string and of m length. 
 indx = strstr(s, chars) - s;
 printf("%s\n", &s[indx] + (m - 1));
 
 return 0;
}
```
This code uses the `printf` function to print the substrings as output. The `&` operator is used to get the address of a variable or expression, which is then added to an integer offset to get the desired substring. The `strchr` and `strstr` functions are used to find the index of the first occurrence of the given character or substring in the string.
Note that this code assumes that the input string is a null-terminated array of characters. If you want to handle strings with embedded null characters, you may need to modify the code accordingly.

