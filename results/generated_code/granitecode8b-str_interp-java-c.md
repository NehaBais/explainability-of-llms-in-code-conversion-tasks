Here is the equivalent code in C:
```
#include 
int main() {
 char adjective[] = "big";
 char lyric[100];
 sprintf(lyric, "Mary had a %s lamb.", adjective);
 printf("%sn", lyric);
 return 0;
}
```
This code defines two strings: `adjective` and `lyric`. The variable `adjective` is assigned the value `"big"`, and the variable `lyric` is used to store the interpolated string. The `sprintf()` function is used to perform the interpolation, which replaces `%s` in the format string with the value of `adjective`. Finally, the interpolated string is printed using `printf()`. Note that the size of the `lyric` array is set to 100 characters to ensure that it can hold the interpolated string without truncation.

