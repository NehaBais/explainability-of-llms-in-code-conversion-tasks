In C++, you can achieve this by declaring a string variable and use the 'append' function to add another string. You also have to include the iostream library for printing purposes. Here is how you could convert your JavaScript code into C++:

```cpp
#include<iostream>
#include<string>

int main() {
    std::string s1 = "Hello";
    s1.append(", World!");
    std::cout << s1 << std::endl;
    return 0;
}
```
This code will output: `Hello, World!`
