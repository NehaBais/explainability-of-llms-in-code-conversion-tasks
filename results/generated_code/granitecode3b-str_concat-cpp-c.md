Here's the C code that performs the same operations as the original C++ code:
```c
#include 
int main() {
 char s[] = "hello";
 printf("%s literaln", s);
 char s2[strlen(s) + 7]; // 7 for " literal"
 strcpy(s2, s);
 strcat(s2, " literal");
 printf("%sn", s2);
 return 0;
}
```
In this C code, we first declare a string variable `s` and initialize it with the value `"hello"`. We then use `printf` to print the value of `s` followed by the string `" literal\n"`.
Next, we declare another string variable `s2` and calculate its length using `strlen(s)`. We then allocate memory for `s2` using `malloc` and assign it the same value as `s` using `strcpy`. Finally, we append the string `" literal"` to `s2` using `strcat` and print the result using `printf`.

