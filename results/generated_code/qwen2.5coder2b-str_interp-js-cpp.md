Sure! Below is the equivalent code in C++ using `std::stringstream` for string interpolation:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string original = "Mary had a X lamb";
    std::string little = "little";

    std::stringstream ss;
    ss << "Mary had a " << little << " lamb";

    std::string result = ss.str();

    std::cout << result << std::endl; // Output: Mary had a little lamb

    return 0;
}
```

### Explanation:
1. **Include Headers**: We include `<iostream>` for input/output operations and `<string>` for string manipulation.
2. **Define Variables**: `original` is the original string, and `little` is the value that will replace "X" in the interpolation.
3. **Use stringstream**: We use `std::stringstream` to concatenate strings dynamically.
   - `ss << "Mary had a " << little << " lamb";` inserts "Mary had a " at the beginning of the string and " lamb" at the end.
4. **Get Result**: Finally, we convert the stream back into a string using `ss.str()` and store it in `result`.
5. **Print Result**: We print the result to the console.

This approach allows for easy string interpolation by concatenating strings with values dynamically.
