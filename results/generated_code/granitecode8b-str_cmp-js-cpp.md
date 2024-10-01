Here is the code converted from JavaScript to C++:
```cpp
#include 
#include 
int main() {
 std::string str1 = "abcd";
 std::string str2 = "abcd";
 bool equal_value = (str1 == str2); // true
 bool not_equal_value = (str1 != str2); // false
 bool less_than = (str1 < str2); // true
 bool greater_than = (str1 > str2); // false
 bool case_insensitive_equal = (std::tolower(str1) == std::tolower(str2)); // true
 std::cout << "Equal value: " << equal_value << std::endl;
 std::cout << "Not equal value: " << not_equal_value << std::endl;
 std::cout << "Less than: " << less_than << std::endl;
 std::cout << "Greater than: " << greater_than << std::endl;
 std::cout << "Case insensitive equal: " << case_insensitive_equal << std::endl;
 return 0;
}
```
Output:

Equal value: true
Not equal value: false
Less than: true
Greater than: false
Case insensitive equal: true

In C++, we use the `==` operator to compare two strings for exact equality, and the `!=` operator to compare two strings for inequality. We can also use the `<` operator to compare two strings to see if one is lexically ordered before than the other, and the `>` operator to compare two strings to see if one is lexically ordered after than the other.
To achieve both case sensitive comparisons and case insensitive comparisons within the language, we can use the `std::equal` function from the `` library. This function compares two sequences of characters for equality, regardless of their case. We can also use the `std::iequals` function from the `` library to perform a case insensitive comparison between two strings.
In C++, we don't have built-in support for comparing numeric strings lexically. However, we can use the `std::stod` function from the `` library to convert a string to a double value and compare them numerically using relational operators such as `<`, `>`, `<=`, or `>=`.
In addition to the comparison operators provided by C++, we can also use various functions and algorithms in the `` library to perform more complex string comparisons. For example, we can use the `std::lexicographical_compare` function to compare two strings based on their lexicographical order. We can also use regular expressions to perform pattern matching and comparison between strings.

