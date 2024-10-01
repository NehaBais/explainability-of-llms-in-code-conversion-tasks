Here is the equivalent code in C++:

```c++
#include <iostream>

void logic(bool A, bool B){
    std::cout << "A AND B: " << (A && B) << std::endl;
    std::cout << "A OR B: " << (A || B) << std::endl;
    std::cout << "NOT A: " << (!A) << std::endl;
}

int main() {
    bool a = true, B = false;
    logic(A,B);
    return 0;
}
```

This C++ code does exactly the same thing as the Java code. It takes two boolean values (A and B) as parameters, calculates their "and" and "or", and prints the results along with a "not" on the first value. The 'main' function is used to demonstrate this functionality. 

Remember that in C++, you need to initialize your variables before using them, hence we have initialized A and B as true and false respectively. Also, note that we use 'std::cout' for printing output instead of 'System.out.println'.
