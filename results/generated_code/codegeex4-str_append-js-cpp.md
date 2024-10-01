In C++, you can achieve this by using `std::string` to create a string variable, and then appending another string literal to it. Finally, you can display the contents of the variable after the append operation.

Here's how you could do that:

```c++
#include <iostream>
#include <string>

int main() {
    std::string s1 = "Hello";
    s1 += ", World!";
    std::cout << s1 << std::endl;
    
    return 0;
}
```

In this code:
- We included the `iostream` and `string` libraries.
- In the `main()` function, we declared a string variable `s1` and initialized it with "Hello".
- Then, we appended ", World!" to `s1`.
- Finally, we used `std::cout` to print the contents of `s1`, followed by a newline character.
