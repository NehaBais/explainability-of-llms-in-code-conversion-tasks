The given code in C can be converted to C++ without changing the logical operators as they are the same in both languages. The following conversion of this code to C++:

```cpp
#include <iostream>

void print_logic(int A, int b)
{
  std::cout << "A and b is " << (A && b) << std::endl;
  std::cout << "A or b is " << (A || b) << std::endl;
  std::cout << "not a is " << (!A) << std::endl;
}

int main() {
    print_logic(1, 2); // example usage
    return 0;
}
```

Remember to replace `1` and `2` in the `main()` function with your actual inputs. This code will run a function which outputs the results of "and", "or" operations and negation operation on input integer values.
