Here is your requested C code:

```c
#include <stdio.h>

void logic(int a, int b){
    printf("a && b: %d\n", a && b);
    printf("a || b: %d\n", a || b);
    printf("!a: %d\n", !a);
}

int main(){
    logic(1, 0);  // This is just an example. You can replace the arguments as per your requirement.
    return 0;
}
```

Please note that in C, logical operations use `&&` for "and", `||` for "or" and `!` for "not". Also, in C, boolean values are represented by integers where `0` is considered as `false` and any non-zero value is considered as `true`.
