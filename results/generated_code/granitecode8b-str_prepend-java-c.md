Here's the converted code in C:
```c
char *string = "def";
char *new_string = "abc" + string;
``` 
Note that in C, strings are represented as character arrays (i.e., `char[]`), and concatenation is performed using the `strcat()` function. However, the code you provided uses the `+` operator to concatenate two strings. This will not work in C because the `+` operator only works with pointers, not with character arrays. To concatenate two strings in C, you can use the `strcat()` function like this:

char *string = "def";
char *new_string = (char *)malloc(strlen("abc") + strlen(string) + 1);
strcat(new_string, "abc");
strcat(new_string, string);

This code allocates a new character array to hold the concatenated string, and then uses `strcat()` twice to add the two strings together. The final result will be stored in the `new_string` variable.

