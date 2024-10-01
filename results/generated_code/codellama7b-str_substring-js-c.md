
Here are the C equivalents for each line of JavaScript:
```
char str[] = "abcdefgh";

//  *  starting from n characters in and of m length;
strncpy(str, n, m);
printf("%s\n", str); // => "cde"

//  * starting from n characters in, up to the end of the string;
strncpy(str, n, strlen(str) - n + 1);
printf("%s\n", str); // => "cdefgh"

//  * whole string minus last character;
strncpy(str, 0, strlen(str) - 1);
printf("%s\n", str); // => "abcdefg"

//  * starting from a known character within the string and of m length;
char* c = strchr(str, 'b');
strncpy(c, n, m);
printf("%s\n", c); // => "bcd"

//  * starting from a known substring within the string and of m length.
char* c = strstr(str, "bc");
strncpy(c, n, m);
printf("%s\n", c); // => "bcd"
```
Note that `strncpy` is used to copy a specified number of characters from one string to another, and `strlen` is used to get the length of a string. The `strchr` function returns a pointer to the first occurrence of a character in a string, and the `strstr` function returns a pointer to the first occurrence of a substring within a string.
Also, the `printf` statement is used to print the result of the operation.
