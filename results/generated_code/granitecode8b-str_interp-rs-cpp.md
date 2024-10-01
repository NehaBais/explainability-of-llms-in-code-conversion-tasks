Here is the equivalent code in C++:
```
#include 
int main() {
 std::string name = "Mary";
 std::string adj = "little";
 std::cout << name << " had a " << adj << " lamb" << std::endl;
 // You can specify order
 std::cout << adj << " had a " << name << " lamb" << std::endl;
 // Or named arguments if you prefer
 std::cout << "{name} had a {adj} lamb" << std::endl;
 std::cout.setf(std::ios::left);
 std::cout.width(10);
 std::cout << adj;
 std::cout << " had a ";
 std::cout.width(10);
 std::cout << name;
 std::cout << " lamb" << std::endl;
 return 0;
}
```
Note that in C++, string interpolation is not as clean as in Rust, and named arguments are not supported by default. However, the equivalent code can be achieved using `std::cout.setf(std::ios::left)` and `std::cout.width()` to left-align and set a fixed width for the output strings.

