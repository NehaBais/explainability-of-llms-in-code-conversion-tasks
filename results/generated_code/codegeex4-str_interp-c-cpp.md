In C++, you can use the `std::cout` function to perform string interpolation. Here is how you might convert your given code.

```cpp
#include <iostream>

int main() {
    const std::string extra = "little";
    std::cout << "Mary had a " << extra << " lamb." << std::endl;
    return 0;
}
```
This will achieve the same result as the original C code. Notice that in C++, we use `std::string` for strings and `std::endl` to indicate the end of a line. We also use the insertion operator (`<<`) to concatenate the string with the value of `extra`.
