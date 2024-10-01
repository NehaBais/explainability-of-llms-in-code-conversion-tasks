Here is the equivalent C++ code for your Java function:

```cpp
#include <iostream>

void logic(bool a, bool b){
    std::cout << "a AND b: " << (a && b) << std::endl;
    std::cout << "a OR b: " << (a || b)) << std::endl;
    std::cout << "NOT a: " << (!a) << std::endl;
}
```
This function takes in two boolean variables, `a` and `b`. It then uses the logical operators '&&' (and), '||' (or), and '!' (not) as well as parentheses to ensure correct precedence of operations. Finally, it prints out the result of these operations for given inputs `a` and `b`.

Note: Unlike Java, C++ doesn't strictly require parenthesis to enforce logical operator precedence in case of more complex boolean expressions. However, using parenthesis can make your code clearer and easier to understand.
