 Below is the equivalent C++ code for your Python script. In C++, strings are handled differently than in Python:

```cpp
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {
    std::string s1 = "hello";
    std::cout << s1 + " world" << std::endl;

    std::string s2 = s1 + " world";
    std::cout << s2 << std::endl;

    std::vector<std::string> vec = {s1, "world", "mom"};
    std::ostringstream os;
    for (const auto& str : vec)
        os << "," << str;
    
    std::cout << "\"" + os.str()[1:] + "\"";  // Output: hello,world,mom
    
    std::string s3 = ", ".join(vec);
    std::cout << s3 << std::endl;

    return 0;
}
```

Here is how the code works in C++:

1. In this first part of the script, we're initializing a string variable `s1` with the value `"hello"`. Then we print out to console what happens when you concatenate this string with another string literal `" world"` (space is included). The result will be printed on new line as per Python.
   
2. We do the same operation for `s2`, only this time, instead of initializing it from s1 directly and then concatenating, we use another variable `s2` to hold the value after concatenation.

3. Next part is a bit different. Instead of using Python's list comprehension or join method which simplifies string concatenation, C++ requires us to manually loop over our vector to perform concatenation. We also use `std::ostringstream os;` for creating and output stream which is then used to create our final string.
   
4. Finally, we have another similar operation as in Python but with different way of implementation in C++. This time, the method used is `string join(vector<string>)` and it joins all strings present in vector using a comma and space as separator. The result will be printed on new line as per Python.
   
5. As a note about C++, unlike Python, we need to include `<string>` for basic string manipulations, `<sstream>` for creating and manipulating streams (like ostringstream here), and `<vector>` for dynamic arrays like vector or list in Python.
