 In C++, you can use `std::string` and the `push_back()` function to achieve a similar result:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "World";
    s.insert(0, "Hello ");
    std::cout << s << std::endl;
    
    return 0;
}
```

In this C++ code:
- We include the necessary libraries (`<iostream>` and `<string>`) at the top of our file to use `std::cout` for outputting text to the console, and `std::string` for dealing with string data types.
- We define a `main()` function which is where our program begins execution.
- Inside this `main()`, we first declare a string variable `s` and assign it the value `"World"`. 
- Then we call the method `insert()` on the string variable to prepend `"Hello "` to the beginning of the string. The `insert()` function takes in two arguments: the index at which to insert the new text (in this case, zero), and the string to be inserted.
- Finally, we use `std::cout` to print out the contents of our string variable `s`.
