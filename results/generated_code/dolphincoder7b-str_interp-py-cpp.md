This is an example of how to implement string interpolation in C++:
```cpp
#include <iostream>
#include <sstream>
 
int main() {
    std::string extra = "little";
    std::stringstream ss;
    ss << "Mary had a ";
    ss << extra;
    ss << " lamb.";
    std::cout << ss.str();
 
    return 0;
}
``` 
Here, we use the `std::stringstream` to create a stream of characters and then perform string interpolation with `<<`. The `ss << "Mary had a "` part appends the first part of the string, followed by the value of `extra`, which results in `Mary had a little lamb.`. Finally, we print the result by calling `ss.str()`. 
Note: You can also use the `printf` function to achieve the same result with a format string that includes placeholder characters for values or variable names, and you would pass those values or variable references as arguments to printf.
