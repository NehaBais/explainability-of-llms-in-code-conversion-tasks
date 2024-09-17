Below is the equivalent C++ code for the given Java code:

```cpp
#include <iostream>
using namespace std;

int main(int argc, char* argv[]) 
{
    // Get two numbers from command line arguments
    int a = atoi(argv[1]));
    int b = atoi(argv[2]));

    int sum = a + b;        // The result of adding 'a' and 'b' (Note: integer addition is discouraged in print statements due to confusion with string concatenation)
    int difference = a - b; // The result of subtracting 'b' from 'a'
    int product = a * b;    // The result of multiplying 'a' and 'b'

    double division = static_cast<double>(a)) / static_cast<double>(b));   // performs true division, can represent fractional results

    int remainder = a % b;  // The remainder of dividing 'a' by 'b' (Note: same sign as first operand if they are different)
    cout << "a + b = " << sum << endl;
    cout << "a - b = " << difference << endl;
    cout << "a * b = " << product << endl;
    cout << "quotient of a / b = " << division << endl;   // performs true division, can represent fractional results
    cout << "remainder of a / b = " << remainder << endl;  // same sign as first operand if they are different

    return 0;
}
```
This C++ code does the following:
1. Gets two integers from the command line arguments using `Scanner` class.
2. Performs integer arithmetic operations like addition, subtraction, multiplication, and modulus operation on these two numbers.
3. Displays the results of these arithmetic operations using `cout` object for standard output.
4. Uses casting (`static_cast<double>(a))`) to convert integer values into floating-point values to perform true division in the quotient calculation section.
5. Handles the remainder operation by indicating that its sign matches the sign of the first operand or the second operand if they are different. This is done by returning `remainder` variable directly without any further manipulation.
