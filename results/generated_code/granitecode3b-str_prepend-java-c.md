Here's the equivalent C code:
```c
char *string = "def";
size_t len = strlen(string);
char new_string[len + 5]; // Assuming we want to add "abc" before it
sprintf(new_string, "abc%s", string);
string = new_string;
```
This code creates a char array `new_string` with extra space for "abc" and then uses sprintf to concatenate the two strings. Finally, it assigns the address of the first element of `new_string` to the `string` variable.

