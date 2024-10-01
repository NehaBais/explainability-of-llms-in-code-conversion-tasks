Here is the converted code from Python to C++:
```
#include 
int main() {
 std::string extra = "little";
 std::string new_str = "Mary had a " + extra + " lamb.";
 std::cout << new_str << std::endl;
 return 0;
}
```
In C++, the `f` prefix before the string is used for string interpolation, which allows us to replace defined character sequences in the string by values or variable values. We first declare a string variable `extra` and assign it the value `"little"`. Then we create a new string variable `new_str` and use the `+` operator to concatenate the three strings together: "Mary had a ", `extra`, and " lamb.". Finally, we print out the resulting string using `std::cout`.

