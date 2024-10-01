Here is the equivalent code in C:
```c
#include 
#include 
int main() {
 char str[] = "Mary had a %s lamb";
 char txt[] = "little";
 char out[100];
 sprintf(out, str, txt);
 printf("%s", out);
 return 0;
}
```
This code uses the `sprintf` function to perform string interpolation. The `%s` in the format string is replaced by the value of the second argument passed to `sprintf`, which is `txt`. The resulting interpolated string is stored in the `out` variable, which is then printed using `printf`.

