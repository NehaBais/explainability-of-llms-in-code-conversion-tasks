Sure, I can help you convert the given Rust code to C++. However, please note that Rust and C++ have different syntax and approaches for handling string interpolation. 

Here is how you can do it:

```cpp
#include <iostream>
#include <string>

// Function to perform string interpolation
std::string interpolate(std::string str, const std::map<std::string, std::string>& replacements) {
    for (const auto& [key, value] : replacements) {
        str = str.replace(str.find(key), key.length(), value);
    }
    return str;
}

int main() {
    // Original string
    std::string originalString = "Mary had a X lamb.";

    // Replacements
    std::map<std::string, std::string> replacements;

    // Case 1: Replacement by order
    replacements["little"] = "big";
    std::cout << interpolate(originalString, replacements) << std::endl;

    // Case 2: Named arguments
    replacements.clear();
    replacements.insert({"name", "Mary"});
    replacements.insert({"adj", "little"});
    std::cout << interpolate(originalString, replacements) << std::endl;

    return 0;
}
```

In this C++ code:

1. We define a function `interpolate` that takes a string and a map of key-value pairs as parameters.
2. The function iterates through the map and replaces each occurrence of the key in the string with its corresponding value.
3. In the `main` function, we create the original string and a map to store the replacements. We then call the `interpolate` function for both cases mentioned in the Rust code snippet.
