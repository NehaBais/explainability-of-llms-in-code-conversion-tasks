Here is the equivalent code in C++:

```cpp
#include <iostream>

void logic(bool a, bool b){
  std::cout << "a AND b: " << (a && b) << std::endl;
  std::cout << "a OR b: " << (a || b) << std::endl;
  std::cout << "NOT a: " << !a << std::endl;
}

int main() {
    logic(true, false);
    return 0;
}
```

This C++ function does the same thing as your Java function. The `std::cout` statement is used to print out the results of the logical operations instead of `System.out.println`. Also in C++, boolean values are represented by `true` and `false`, which are exactly the same as `True` and `False` in Java. And, unlike Java, there's no need for a class definition in order to define methods in C++. So we can define the method outside of any class.
And also note that C++ uses `<<` operator instead of `+` to concatenate strings and variables or values.
