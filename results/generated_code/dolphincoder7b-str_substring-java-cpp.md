The provided Java code can be translated to C++ with a couple of caveats:

1. The `System.out.println()` function in Java is not present in C++. You would need to manually print the output if you want to see it.
2. In C++, classes cannot be declared within namespaces. Therefore, we will declare the class outside any namespace or using block. Here's how the code would look like:
```c++
#include <iostream>
#include <string>
using namespace std;

class Substring {
    public:
        static string Substring(string str, int n, int m) {
            return str.substr(n, m); // substr method in C++ returns a substring of the specified length
        }

        static string Substring(string str, int n) {
            return str.substr(n); // if n is not provided or it's not possible to convert it to an integer value, substr method starts from the index '0' by default
        }
        
        static string Substring(string str) {
            return str.substr(0, str.length()-1); // if m and n are both 0, then the default values for substr method will be used: starts from the beginning of the string and goes till the second last character
        }

        static string Substring(string str, char c, int m) {
            return str.substr(str.find(c), m+1); // find method in C++ returns the index of first occurrence of a given character or string
        }

        static string Substring(string str, string sub, int m) {
            return str.substr(str.find(sub), m+1); // same as above
        }
};

int main() {
    string str = "Hello World";

    cout << Substring::Substring(str) << endl; // whole string minus the last character
    cout << Substring::Substring(str, 5, 10) << endl; // starting from n characters in and of m length
    cout << Substring::Substring(str, 2) << endl; // starting from n characters in, up to the end of the string
    cout << Substring::Substring(str, 'l', 3) << endl; // starting from a known character within the string and of m length
    cout << Substring::Substring(str, "Wo", 2) << endl; // starting from a known substring within the string and of m length

    return 0;
}
```
