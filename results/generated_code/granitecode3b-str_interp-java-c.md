Here's the equivalent C code for the given Java code snippet using string interpolation:
```c
#include 
int main() {
 const char* adjective = "little";
 const char* lyric = "Mary had a %s lamb";
 char interpolated[100];
 
 sprintf(interpolated, lyric, adjective);
 puts(interpolated);
 
 return 0;
}
```
In this C code, we first define the `adjective` and `lyric` variables as constants. We then declare an array `interpolated` to hold the interpolated string. Finally, we use the `sprintf()` function to perform the string interpolation using the values of `adjective` and `lyric`. The result is stored in the `interpolated` array, which we then print using `puts()`.

