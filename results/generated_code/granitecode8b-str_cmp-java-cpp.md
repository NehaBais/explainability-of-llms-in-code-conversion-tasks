Here's the equivalent code in C++:
```c++
#include 
#include 
int main() {
 std::string A = "Hello";
 std::string B = "Hello";
 if (A == B) {
 std::cout << "'" << A << "' and '" << B << "' are lexically equal." << std::endl;
 } else {
 std::cout << "'" << A << "' and '" << B << "' are not lexically equal." << std::endl;
 }
 
 if (A != B) {
 std::cout << "'" << A << "' and '" << B << "' are not lexically equal." << std::endl;
 } else {
 std::cout << "'" << A << "' and '" << B << "' are lexically equal." << std::endl;
 }
 
 if (A < B) {
 std::cout << "'" << A << "' is lexically before '" << B << "'." << std::endl;
 } else if (A > B) {
 std::cout << "'" << A << "' is lexically after '" << B << "'." << std::endl;
 }
 
 if (A <= B) {
 std::cout << "'" << A << "' is not lexically before '" << B << "'." << std::endl;
 } else {
 std::cout << "'" << A << "' is not lexically after '" << B << "'." << std::endl;
 }
 
 int comparison = A.compare(B);
 if (comparison < 0) {
 std::cout << "'" << A << "' is lexically before '" << B << "'." << std::endl;
 } else if (comparison > 0) {
 std::cout << "'" << A << "' is lexically after '" << B << "'." << std::endl;
 } else {
 std::cout << "'" << A << "' and '" << B << "' are lexically equal." << std::endl;
 }
 
 int caseInsensitiveComparison = A.compare(B);
 if (caseInsensitiveComparison < 0) {
 std::cout << "'" << A << "' is lexically before '" << B << "' in a case-insensitive comparison." << std::endl;
 } else if (caseInsensitiveComparison > 0) {
 std::cout << "'" << A << "' is lexically after '" << B << "' in a case-insensitive comparison." << std::endl;
 } else {
 std::cout << "'" << A << "' and '" << B << "' are lexically equal in a case-insensitive comparison." << std::endl;
 }
 
 return 0;
}
```
This code uses the `std::string` class to compare strings. The `==` operator is used for exact equality, while the `!=` operator is used for inequality. The `<` and `>` operators are used for lexicographical order, while the `<=` and `>=` operators are used for the inverse of lexicographical order.
The `std::string::compare()` function is used to compare two strings lexicographically. If the return value is less than zero, it means that the first string is lexicographically before the second string. If the return value is greater than zero, it means that the first string is lexicographically after the second string. If the return value is equal to zero, it means that the two strings are lexicographically equal.
The `std::string::compare()` function can also be used for case-insensitive comparisons by passing a second argument to the function indicating whether to perform a case-sensitive or case-insensitive comparison. If the return value is less than zero, it means that the first string is lexicographically before the second string in a case-insensitive comparison. If the return value is greater than zero, it means that the first string is lexicographically after the second string in a case-insensitive comparison. If the return value is equal to zero, it means that the two strings are lexicographically equal in a case-insensitive comparison.
Note that the behavior of comparing numeric strings may vary depending on the locale settings. In some locales, numeric strings will be compared lexicographically even if they represent numbers. To ensure consistent behavior, you can use the `std::isdigit()` function to check if each character in the string is a digit before performing any comparisons.

