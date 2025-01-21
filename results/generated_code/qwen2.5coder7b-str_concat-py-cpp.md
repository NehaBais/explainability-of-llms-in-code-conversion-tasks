Here is how you can convert the given Python code to C++:

#include <iostream>
#include <string>

int main()
{
    // Create a string variable equal to any text value.
    std::string s1 = "hello";
    
    // Concatenate with another string literal and print the result.
    std::cout << s1 + " world" << std::endl;
    
    // Store the concatenated result in another variable.
    std::string s2 = s1 + " world";
    
    // Print the value of the second variable.
    std::cout << s2 << std::endl;

    // Create a string variable equal to any text value.
    s1 = "hello";
    
    // Join with another string literal and print the result using join() function from C++11
    std::string s3 = ", ".join({s1, "world", "mom"});
    
    // Print the value of the third variable.
    std::cout << s3 << std::endl;

    return 0;
}

Please note that `std::join` does not exist in C++ standard library. This is only for illustrative purposes as per your request to show how you can join strings in C++. In real C++ code, you will need to use a loop or a string stream to concatenate multiple strings.

```cpp
#include <iostream>
#include <sstream>
#include <string>

int main()
{
    // Create a string variable equal to any text value.
    std::string s1 = "hello";
    
    // Concatenate with another string literal and print the result.
    std::cout << s1 + " world" << std::endl;
    
    // Store the concatenated result in another variable.
    std::string s2 = s1 + " world";
    
    // Print the value of the second variable.
    std::cout << s2 << std::endl;

    // Create a string variable equal to any text value.
    s1 = "hello";

    // Create stringstream object for join
    std::stringstream ss;
    
    // Join with another string literal and print the result using stringstream.
    ss << s1 << ", world, mom";
    
    // Print the value of the third variable.
    std::cout << ss.str() << std::endl;

    return 0;
}
```
This code will give you the same output as your Python code.
