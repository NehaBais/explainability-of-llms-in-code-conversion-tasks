In C++, you can achieve the same result with the following code:

```cpp
#include <iostream>
#include <string>

int main(){
    std::string hello = "Hello world";
    hello += "!!!!";
    std::cout << hello;
    return 0;
}
```

In this C++ program, we first include the necessary libraries: `iostream` for input and output stream and `string` for string manipulation. We then create a `std::string` object named `hello` with the value "Hello world". We append the string literal "!!!!" to the end of `hello` using the `+=` operator, which is idiomatic in C++. Finally, we print the contents of `hello` to the console.
