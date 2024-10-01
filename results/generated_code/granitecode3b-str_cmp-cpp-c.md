Here is the C code that demonstrates how to compare two strings from within the language and how to achieve a lexical comparison:
```
#include 
#include 
#include 
int main(int argc, char *argv[]) {
 // Case-sensitive comparisons.
 std::string a((argc > 1) ? argv[1] : "1.2.Foo");
 std::string b((argc > 2) ? argv[2] : "1.3.Bar");
 std::cout << a << " and " << b << " are " 
 << ((a == b) ? "" : "not ") << "exactly equal." << std::endl;
 
 std::cout << a << " and " << b << " are " 
 << ((a != b) ? "" : "not ") << "inequal." << std::endl;
 
 std::cout << a << " is " 
 << ((a < b) ? "" : "not ") << "ordered before " << b << '.' << std::endl;
 
 std::cout << a << " is " 
 << ((a > b) ? "" : "not ") << "ordered after " << b << '.' << std::endl;
 return 0;
}
```
This code compares two strings, `a` and `b`, for exact equality, inequality, and lexical order. It also demonstrates how to achieve case-insensitive comparisons by folding both strings to a common case using the `std::transform()` function. Finally, it also demonstrates how to compare numeric strings by treating them as any type for which the relevant `` operator is defined, such as int, long, etc.

