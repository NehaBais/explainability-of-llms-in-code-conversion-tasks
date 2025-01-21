The error occurs because Rust does not support named arguments for string interpolation like C++. In C++, we can use either positional or named arguments depending on whether we want to preserve the order of the arguments in the final output string. Named arguments are supported, but they must be provided separately and in the correct order to match their positions in the string.

To fix this error, we will provide separate statements for each placeholder and provide the values for each variable. This way, the compiler can understand that each argument is a separate value that should replace the corresponding placeholders in the output string. Here's the corrected code:

```cpp
#include <iostream>
int main() {
  std::cout  << "{name} had a {adj} lamb\n", name="Mary", adj="little";
}
```

This will print "Mary had a little lamb" as expected.
