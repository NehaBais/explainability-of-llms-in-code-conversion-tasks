Sure! Below is the equivalent code in C++:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "Hello, ";
    s = s + "world!";
    std::cout << s;
    return 0;
}
```

### Explanation:
1. **Include Headers**: We include `<iostream>` for input and output operations and `<string>` for string manipulation.
2. **Main Function**: The `main` function is the entry point of the program.
3. **Define String Variables**:
   - `std::string s = "Hello, ";`: This declares a string variable `s` initialized with the value `"Hello, "` followed by an empty string.
4. **Concatenate Strings**:
   - `s = s + "world!";`: This concatenates the string `"world!"` to the end of the existing string `s`, resulting in the new value `"Hello, world!"`.
5. **Print Result**: We use `std::cout << s;` to print the final string to the console.
6. **Return Statement**: The program returns 0 to indicate successful execution.

You can compile and run this code using a C++ compiler like g++.
