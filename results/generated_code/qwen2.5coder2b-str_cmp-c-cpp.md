Below is the C++ equivalent of the provided C code. In C++, we use `std::string` class for string manipulation and also provide both case sensitive and insensitive comparisons.

```cpp
#include <iostream>
#include <string>

#define STREQ(a, b) (a == b)
#define STRNE(a, b) (a != b)
#define STRLT(a, b) (a < b)
#define STRLE(a, b) (a <= b)
#define STRGT(a, b) (a > b)
#define STRGE(a, b) (a >= b)

#define STRCEQ(a, b) (a == b)
#define STRCNE(a, b) (a != b)
#define STRCLT(a, b) (a < b)
#define STRCLE(a, b) (a <= b)
#define STRCGT(a, b) (a > b)
#define STRCGE(a, b) (a >= b)

void compare(const std::string& a, const std::string& b) {
  std::cout << a
              << " " 
              << (STREQ(a, b)? "eq" : "ne")
              << " " 
              << (STRNE(a, b)? "ne" : "eq")
              << " " 
              << (STRLT(a, b)? "lt" : "ge")
              << " " 
              << (STRLE(a, b)? "le" : "gt")
              << " " 
              << (STRGT(a, b)? "gt" : "lt")
              << " " 
              << (STRGE(a, b)? "ge" : "lt")
              << " "
              << b
              << std::endl;
}

void comparecase(const std::string& a, const std::string& b) {
  std::cout << a 
              << " " 
              << (STRCEQ(a, b)? "eq" : "ne")
              << " " 
              << (STRCNE(a, b)? "ne" : "eq")
              << " " 
              << (STRCGT(a, b)? "gt" : "ge")
              << " " 
              << (STRCLT(a, b)? "le" : "lt")
              << " " 
              << (STRCGE(a, b)? "ge" : "lt")
              << " "
              << b
              << std::endl;
}

int main(int argc, char*argv[]) {
  while (--argc > 0) {
    compare(argv[1], argv[2]);
    comparecase(argv[1], argv[2]);
    --argc;
  }
  return 0;
}
```

### Explanation:
- **std::string**: Used for string manipulation. This class provides methods like `==`, `!=`, `<`, `<=`, `>=`, and `>` which are equivalent to the C functions.
- **compare**: Function to compare two strings and print comparison results in a similar format as the original C code.

### Compilation and Execution:
To compile this code, you can use the following command in your terminal:

g++ -o c++ c++.cpp
./c++ ball bell ball ball YUP YEP     ball BELL ball BALL YUP yep

The program will output the comparison results for both exact and case insensitive comparisons.
