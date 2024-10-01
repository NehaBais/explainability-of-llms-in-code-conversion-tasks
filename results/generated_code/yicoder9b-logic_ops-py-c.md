Here is the equivalent C code for your Python function:

```C
#include <stdio.h>

void logic(int a, int b){
    printf("a and b: %d\n", a && b);
    printf("a or b: %d\n", a || b);
    printf("not a: %d\n", !a);
}

int main(){
    logic(1, 0);  //Test the function with some values.
    return 0;     
}
```
In C, boolean values are represented as integers where `0` represents `false` and anything non-zero (like `1`) represents `true`. Also notice that the logical operators `and`(`&&`) and `or`(`||`) work in a similar way to their Python counterparts. However, there's no specific "not" operator in C, instead we use `!` which also works just like its Python counterpart.
