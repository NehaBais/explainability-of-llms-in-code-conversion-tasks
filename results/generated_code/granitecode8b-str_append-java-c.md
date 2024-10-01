Here is the equivalent code in C:
```
#include 
int main() {
 char str[100];
 strcpy(str, "abc");
 printf("%s", str);
 strcat(str, "def");
 printf("%s", str);
 return 0;
}
```
In this code, we first declare a character array `str` with a size of 100 to store our string. We then use the `strcpy` function to copy the string literal "abc" into the `str` array. We print the contents of `str` using `printf`. Next, we use the `strcat` function to append the string literal "def" to the end of `str`. Finally, we print the updated contents of `str` using `printf`.

