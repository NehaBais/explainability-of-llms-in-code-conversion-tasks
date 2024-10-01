Here is the equivalent C code for your Python logic function. I've included comments to explain what each line does:

```c
#include <stdio.h>

// Declare and define the 'logic' function
void logic(int a, int b) {

    printf("a and b: %d\n", a && b);
    printf("a or b: %d\n", a || b);
    printf("not a: %d\n", !a);
}

// Main function to test the 'logic' function
int main() {

    int a = 1; // First logical value
    int b = 0; // Second logical value

    // Call the 'logic' function with the provided arguments
    logic(a, b);

    return 0;
}
```

Please note that C does not natively support Boolean types like Python. Therefore, we have to explicitly define whether a variable stores a Boolean value or an integer value in C. In this example, I've used `int` type variables for demonstration purposes. You may want to modify the code according to your specific requirements and context.
