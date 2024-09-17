Here is the C++ equivalent of your Python code. This C++ version uses `std::cin` for reading from standard input and includes comments to explain each step in detail.

```c++
#include <iostream> // Needed for IO operations like cout, cin

int main() {
    int a, b;  // Declare two integers
    
    std::cout << "Enter value of a: ";   // Prompt user to enter the first integer
    std::cin >> a;                        // Reads the input into variable 'a'
    
    std::cout << "Enter value of b: ";  // Prompt user for second number
    std::cin >> b;                       // Reads the input into variable 'b'

    if (a < b) {   // Check if first integer is less than the second
        std::cout << "a is less than b" << std::endl;  // If so, prints this message
    } else if (a > b) {    // Checks if the first number is greater than the second.
        std::cout << "a is greater than b" << std::endl;   // If so, print this message
    } else if (a == b) {  // Check if both integers are equal.
        std::cout << "a is equal to b" << std::endl;  // If so, prints this message
    }
    
    return 0;   // End of program
}
```
This C++ code does exactly the same as your Python script but in a different programming language and syntax. The input reading part remains largely unchanged - `std::cin >>` reads from standard input (keyboard) into variables. Then, you can use conditional statements (if-else if-else structure) to compare two integers and print out corresponding message depending on their comparison result.

