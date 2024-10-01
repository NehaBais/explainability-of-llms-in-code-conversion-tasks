Here's the equivalent C code for the given Rust code:
```
#include 
int main() {
 printf("Mary had a %s lambn", "little");
 // You can specify order
 printf("%sn%s had a %sns %s lamb", "little", "Mary", "little", "Mary");
 // Or named arguments if you prefer
 printf("%s had a %sns lambn", "Mary", "little", "Mary", "little");
 return 0;
}
```
Note that the C code uses `printf` function to print the interpolated string, while Rust uses `println`. Also, in C, the order of arguments in the format string matters, while in Rust, the order doesn't matter as long as the placeholders are in the correct positions.

