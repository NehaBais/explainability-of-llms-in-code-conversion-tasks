 In C++, you can use `std::string` to manipulate strings just like in JavaScript. Here is how it would look:

```cpp
#include<iostream>
#include<string>
using namespace std;

int main() {
    string s = "hello";
    s += " there!"; // Concatenate another string literal to the variable s.
    cout << s; // Outputs: hello there!
    return 0;
}
```

In this C++ code, we first include the necessary libraries. Then, in our `main` function, we declare a string variable `s` and assign it the value `"hello"`. We then concatenate another string literal to `s`, which is `" there!"` (with a space at the start), using the `+=` operator. Finally, we output the content of `s`, which will display the text: "hello there!".
