 Sure! Below is the equivalent C++ code for the provided C code. This C++ code demonstrates various string comparisons including exact equality, inequality, lexicographical order, and case sensitivity.

```cpp
#include <iostream>
#include <cstring>
#include <algorithm> // For std::equal with custom comparator for case-insensitive comparison

#define STREQ(A, B) (strcmp((A), (B)) == 0)
#define STRNE(A, B) (strcmp((A), (B)) != 0)
#define STRLT(A, B) (strcmp((A), (B)) < 0)
#define STRLE(A, B) (strcmp((A), (B)) <= 0)
#define STRGT(A, B) (strcmp((A), (B)) > 0)
#define STRGE(A, B) (strcmp((A), (B)) >= 0)

#define STRCEQ(A, B) (strcasecmp((A), (B)) == 0)
#define STRCNE(A, B) (strcasecmp((A), (B)) != 0)
#define STRCLT(A, B) (strcasecmp((A), (B)) < 0)
#define STRCLE(A, B) (strcasecmp((A), (B)) <= 0)
#define STRCGT(A, B) (strcasecmp((A), (B)) > 0)
#define STRCGE(A, B) (strcasecmp((A), (B)) >= 0)

void compare(const char* a, const char* b) {
    std::cout << a << " "
              << STREQ(a, b) << " "
              << STRNE(a, b) << " "
              << STRGT(a, b) << " "
              << STRLT(a, b) << " "
              << STRGE(a, b) << " "
              << STRLE(a, b) << " "
              << b << std::endl;
}

void comparecase(const char* a, const char* b) {
    std::cout << a << " "
              << STRCEQ(a, b) << " "
              << STRCNE(a, b) << " "
              << STRCGT(a, b) << " "
              << STRCLT(a, b) << " "
              << STRCGE(a, b) << " "
              << STRCLE(a, b) << " "
              << b << " ignoring case" << std::endl;
}

int main(int ac, char* av[]) {
    if (ac < 2) {
        std::cerr << "Usage: " << av[0] << " string1 string2 [...]\n";
        return 1;
    }

    std::cout << "\t eq , ne , gt , lt , ge , le" << std::endl;
    for (int i = 1; i < ac; i += 2) {
        const char* a = av[i];
        const char* b = av[i + 1];
        compare(a, b);
        comparecase(a, b);
    }
    return 0;
}
```

### Explanation:
1. **Macro Definitions**: The macros `STREQ`, `STRNE`, etc., are defined to check for equality and inequality using `strcmp` for exact comparisons and `strcasecmp` for case-insensitive comparisons.
2. **Comparison Functions**: 
   - `compare`: Performs the comparison and prints the results for both exact and case-insensitive cases.
   - `comparecase`: Similar to `compare`, but specifically handles case-insensitive comparisons.
3. **Main Function**: Reads command line arguments, performs comparisons, and prints the results.

### Usage:
Compile and run the program as shown in the original C code example:

$ a=./c++ && make $a && $a ball bell ball ball YUP YEP     ball BELL ball BALL YUP yep


This will produce output similar to the provided C code, demonstrating various string comparisons.
