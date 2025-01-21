In C++, string interpolation is not as straightforward as in Rust or other modern languages, but we can achieve similar results using `std::format` (introduced in C++20) or by manually replacing placeholders with actual values. Below is an example of how to perform string interpolation in C++:

### Using C++20 `std::format`
```cpp
#include <iostream>
#include <format>

int main() {
    std::string interpolated = std::format("Mary had a {} lamb", "little");
    std::cout << interpolated << std::endl;

    // Specifying order of arguments
    interpolated = std::format("{1} had a {0} lamb", "little", "Mary");
    std::cout << interpolated << std::endl;

    // Using named arguments (not directly supported, but can be simulated with maps)
    std::string name = "Mary";
    std::string adj = "little";
    interpolated = std::format("{name} had a {adj} lamb", std::make_pair("name", name), std::make_pair("adj", adj));
    std::cout << interpolated << std::endl;

    return 0;
}
```

### Using manual string replacement
If you are not using C++20, you can manually replace placeholders in a string. Here's an example:

#include <iostream>
#include <string>

void interpolate(std::string& str, const std::string& placeholder, const std::string& value) {
    size_t pos = 0;
    while ((pos = str.find(placeholder, pos)) != std::string::npos) {
        str.replace(pos, placeholder.length(), value);
        pos += value.length();
    }
}

int main() {
    std::string interpolated = "Mary had a X lamb";
    interpolate(interpolated, "X", "little");
    std::cout << interpolated << std::endl;

    // Specifying order of arguments
    interpolated = "X had a Y lamb";
    interpolate(interpolated, "Y", "little");
    interpolate(interpolated, "X", "Mary");
    std::cout << interpolated << std::endl;

    // Using named arguments (not directly supported, but can be simulated with maps)
    std::string name = "Mary";
    std::string adj = "little";
    std::string interpolated_named = "{name} had a {adj} lamb";
    interpolate(interpolated_named, "{name}", name);
    interpolate(interpolated_named, "{adj}", adj);
    std::cout << interpolated_named << std::endl;

    return 0;
}

### Explanation
1. **C++20 `std::format`**: This provides a modern and readable way to perform string interpolation. It directly supports ordered and named placeholders.
2. **Manual String Replacement**: This approach involves manually searching for placeholder substrings and replacing them with actual values. It requires more boilerplate code but can be used in older C++ versions that do not support `std::format`.

Choose the method that best fits your project requirements and constraints.
