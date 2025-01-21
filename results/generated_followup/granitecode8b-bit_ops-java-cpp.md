The error message indicates that there are multiple issues with the code. The first error is that the #include directive for the iostream library is missing.

Next, the using namespace std statement is used in Java but not in C++. This statement imports all the members of the standard library into the global namespace. In C++, we should only import the specific functions and objects that we need. To fix this, we can remove the using namespace std statement from the code.

This will ensure that the program prints "End of program" when it finishes executing. The corrected code is as follows:
```cpp
#include 
void bitSwapRequired(int n1, int n2) {
    int x = n1 ^ n2;
    int count = 0;
    while (x != 0) {
        count++;
        x &= x - 1;
    }
    std::cout << "Number of bits required to swap : " << count << std::endl;
}
int main() {
    int n1 = 10, n2 = 5;
    bitSwapRequired(n1, n2);
    std::cout << "End of program" << std::endl;
    return 0;
}
```

