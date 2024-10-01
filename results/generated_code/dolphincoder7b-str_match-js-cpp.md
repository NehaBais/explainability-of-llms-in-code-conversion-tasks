Below is the C++ equivalent of your JavaScript code:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string stringA = "tacoloco";
    std::string stringB = "co";

    // stringA starts with stringB
    bool q1 = (stringA.substr(0, stringB.length()) == stringB);

    // stringA contains stringB
    int q2 = stringA.find(stringB);

    // multiple matches
    std::vector<int> q2matches;
    size_t m;
    while ((m = stringA.find(stringB, m)) != std::string::npos) {
        q2matches.push_back(m);
    }

    // stringA ends with stringB
    bool q3 = (stringA.substr(-stringB.length()) == stringB);

    std::cout << "1: Does '" + stringA + "' start with '" + stringB + "'? ";
    if (q1) {
        std::cout << "Yes." << std::endl;
    } else {
        std::cout << "No." << std::endl;
    }

    std::cout << "2: Is '" + stringB + "' contained in '" + stringA + "'? ";
    if (~q2) {
        std::cout << "Yes, at index " + std::to_string(q2) + "." << std::endl;
    } else {
        std::cout << "No." << std::endl;
    }

    if (~q2 && q2matches.size() > 1) {
        std::cout << "   In fact, it happens " + std::to_string(q2matches.size()) + " times within '" + stringA + "', at index" + ((q2matches.size() > 1) ? "es" : "") + " " + std::to_string(q2matches[0]) + ".";
        for (int i = 1; i < q2matches.size(); ++i) {
            std::cout << ", " + std::to_string(q2matches[i]);
        }
    }

    std::cout << std::endl;

    std::cout << "3: Does '" + stringA + "' end with '" + stringB + "'? ";
    if (q3) {
        std::cout << "Yes." << std::endl;
    } else {
        std::cout << "No." << std::endl;
    }

    return 0;
}
```
This code is quite similar to the JavaScript counterpart, with a few differences.

1. We are using C++'s `std::string` instead of JavaScript's string. This means we have access to more features and functions that make working with strings easier.
2. We are using C++'s `vector` data structure to store the multiple matches for part 2. In JavaScript, we use an array because it's a built-in data type in the language. However, in C++, we need to declare our own vector since it doesn't exist natively.
3. We're using `<iostream>` instead of `console` to write to the console output.
4. When printing the index for part 2, we use `std::to_string(q2matches[i])`, which converts the index from an integer to a string for better readability.
5. In C++, we use `~` to represent logical negation (`!`). The unary not operator in JavaScript is represented as `!`.
6. To check if a variable exists, we use the unary `!` operator in C++. In JavaScript, we would do this with an expression like `typeof q2 !== 'undefined'`, but in C++ we can simply use `~q2` to achieve the same result. 
7. Lastly, we're using the `size_t` type instead of `int` for storing the results of string operations (e.g., `find`). This is because `size_t` is the smallest integer data type in C++ that can hold a size or index. Using `int`, if the result of an operation exceeds 2 billion, you may encounter undefined behavior.
