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
char *c = strchr(str, 'b');
strncpy(c, n, m);
printf("%s\n", c); // => "bcd"

//  * starting from a known substring within the string and of m length.
char *c = strstr(str, "bc");
strncpy(c, n, m);
printf("%s\n", c); // => "bcd"