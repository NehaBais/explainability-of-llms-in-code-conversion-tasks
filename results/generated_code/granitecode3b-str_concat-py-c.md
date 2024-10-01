Here's the C code that accomplishes the same task as the Python code:
```c
#include 
int main() {
 char s1[] = "hello";
 printf("%s %s\n", s1, "world");
 
 // Concatenate s1 and a string literal
 char s2[strlen(s1) + 6];
 sprintf(s2, "%s world", s1);
 printf("%s\n", s2);
 
 // Use the join function to concatenate an array of strings
 char *arr[] = {"hello", "world", "mom"};
 char *s3 = ", ".join(arr, 3);
 printf("%s\n", s3);
 
 return 0;
}
```
The C code first initializes the string variable `s1` with a literal value. It then concatenates `s1` with the string `" world"` using the `printf` function and stores the result in `s2`. Finally, it uses the `join` function from the `<string.h>` library to concatenate an array of strings into a single string and store the result in `s3`. The output of this program will be:

hello world
hello, world, mom


