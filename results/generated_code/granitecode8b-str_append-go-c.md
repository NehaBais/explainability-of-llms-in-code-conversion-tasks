Here is the equivalent code in C:
```
#include 
#include 
int main() {
 char* str = "foo";
 char* append_str = "bar";
 strcat(str, append_str);
 printf("%s", str);
 return 0;
}
```
In this code, we first declare two string variables `str` and `append_str`, and initialize them with the values "foo" and "bar" respectively. We then use the `strcat()` function to concatenate the two strings together, and store the result back in `str`. Finally, we use `printf()` to print out the contents of `str`.

