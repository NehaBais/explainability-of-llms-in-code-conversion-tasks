Here is the equivalent code in C++:
```
#include 
#include 
int main() {
 std::string str = "12345678";
 str += "9!";
 std::cout << str << std::endl;
 return 0;
}
```
In this code, we first include the necessary header files for input/output and string manipulation. We then declare a `std::string` variable named `str` and initialize it with the value `"12345678"`. We append the string literal `"9!"` to the end of `str` using the `+=` operator, which is the idiomatic way to append strings in C++. Finally, we print the contents of `str` using `std::cout`, followed by a newline character to ensure that the output appears on a new line.

