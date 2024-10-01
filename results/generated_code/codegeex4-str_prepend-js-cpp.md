In C++, you can use the `+` operator to concatenate strings and insert at the beginning of a string like this:

```cpp
#include<iostream>
#include<string>

int main() {
    std::string s = ", World";
    s = "Hello" + s;
    std::cout << s << "\n";
    return 0;
}
```

Please note that you need to include `<iostream>` and `<string>` for input-output operations and string manipulation respectively. The `std::cout` is used to print the result on the console, similar to JavaScript's `console.log()`. 

Also, C++ does not have a built-in prepend function like some other languages (like Python), but the `+` operator can be used to concatenate strings in a way that allows you to effectively 'prepend' one string onto another.
