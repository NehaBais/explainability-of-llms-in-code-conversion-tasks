The given code is already in C++. It uses `atoi` function to convert string inputs into integers and then performs arithmetic operations on those numbers. The integer division rounds towards zero, so if a/b has a remainder, the fractional part will be truncated (or "rounded towards zero"). For the modulus operation, it returns the remainder of a/b. It keeps its sign as that of the first operand which is consistent with C++ arithmetic operations. Here's how you can use this code:
```cpp
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[]) 
{
    if (argc < 3) {
        std::exit(1);
    }
    
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);

    // error check, exit if second conversion resulted in 0
    if (!b) {
      std::exit(2);  
    }
        
    std::cout << "a+b  = " << a + b << '\n';
    std::cout << "a-b  = " << a - b << '\n';
    std::cout << "a*b  = " << a * b << '\n';
    
    if (b != 0) { // prevent division by zero
        std::cout << "a/b  = " << a / b << '\n';  /* truncates towards 0 */
        int remainder = a % b;
        std::cout << "a%b  = " << remainder << '\n';  
    }
    
    return <｜begin▁of▁sentence｜> // this isn't used in the given code, so it's just an example. It doesn't compile as is. C++ uses return 0 to indicate successful program execution. You might want to wrap that with a function or do something similar based on your needs.  
}
```
To run:
- Compile: `g++ -o myProgramName filename.cpp`
- Run: `./myProgramName 15 3`

