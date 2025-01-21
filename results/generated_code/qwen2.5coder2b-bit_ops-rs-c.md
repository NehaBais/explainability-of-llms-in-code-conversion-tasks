The equivalent C code for the above Rust code would be:

```c
#include <stdio.h>

int main(){
    unsigned char a=105;
    unsigned char b=91;

    printf("a      = %08x\n", a);  // hexadecimal format (lowercase)
    printf("b      = %08x\n", b);
    printf("a | b  = %08x\n", a|b);
    printf("a & b  = %08x\n", a&b);
    printf("a ^ b  = %08x\n", a^b);
    printf("!a     = %08x\n", ~a);
    printf("a << 3 = %08x\n", a<<3);
    printf("a >> 3 = %08x\n", a>>3);

    return 0;
}
```

You might notice that the hexadecimal output of each operation in Rust was shown as lowercase. That is because Rust uses lowercase characters for binary literals. However, in C, it uses uppercase letters like `A` and `B`, which is why I have included the `%08X` format specifier instead of `%08x`.
