```
#include <iostream>

int main() {
    int n1, n2;
    std::cout << "Enter the first number: ";
    std::cin >> n1;
    std::cout << "Enter the second number: ";
    std::cin >> n2;

    if (n1 < n2) {
        std::cout << n1 << " is less than " << n2 << std::endl;
    } else if (n1 == n2) {
        std::cout << n1 << " is equal to " << n2 << std::endl;
    } else {
        std::cout << n1 << " is greater than " << n2 << std::endl;
    }

    return 0;
}
```
This code uses the `std::cin` input stream to get input from the user, and then compares the two integers using the `<`, `==`, and `>` operators. It then prints a message based on the result of the comparison using the `std::cout` output stream.

Note that in C++, you need to use `std::cin` and `std::cout` instead of `fmt.Scan` and `fmt.Println`. Also, you need to use `if` statement to check the condition, `switch` statement is not needed here.
