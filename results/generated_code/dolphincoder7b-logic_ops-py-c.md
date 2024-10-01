To convert the given Python code to C, we need to consider the limitations of C. In C, there is no built-in operator for "and" or "or". Therefore, we need to define our own functions to achieve the same functionality as in Python:

```c
#include <stdio.h>
#include <stdbool.h>

bool and_logic(bool a, bool b) {
    if (a && b) {
        return true;
    } else {
        return false;
    }
}

bool or_logic(bool a, bool b) {
    if (a || b) {
        return true;
    } else {
        return false;
    }
}

void logic(bool a, bool b) {
    printf("a and b: %d\n", and_logic(a, b));
    printf("a or b: %d\n", or_logic(a, b));
    printf("not a: %d\n", !a);
}

int main() {
    logic(true, false); // a and b: 0, a or b: 1, not a: 0
    logic(false, true); // a and b: 0, a or b: 1, not a: 1
    logic(true, true); // a and b: 1, a or b: 1, not a: 0
    return 0;
}
```

In the above C code, we define two separate functions for "and" and "or". We then utilize these functions within `logic` to achieve the same functionality as in Python. Note that C does not have built-in support for logical operators like "not". Therefore, we need to use the bitwise NOT operator (which is represented by the exclamation mark: !).

The output of this program is:

a and b: 0
a or b: 1
not a: 0
a and b: 0
a or b: 1
not a: 1
a and b: 1
a or b: 1
not a: 0

