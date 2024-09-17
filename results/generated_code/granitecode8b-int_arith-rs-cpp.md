Here is the converted code from Rust to C++:
```
#include 
#include 
int main(int argc, char* argv[]) {
 if (argc != 3) {
 std::cerr << "Usage: " << argv[0] << " a b" << std::endl;
 return 1;
 }
 
 int a = std::stoi(argv[1]);
 int b = std::stoi(argv[2]);
 
 std::cout << "sum:              " << a + b << std::endl;
 std::cout << "difference:       " << a - b << std::endl;
 std::cout << "product:          " << a * b << std::endl;
 std::cout << "integer quotient: " << (a / b) << std::endl; // truncates towards zero
 std::cout << "remainder:        " << (a % b) << std::endl; // same sign as first operand
 
 return 0;
}
```
In C++, we use `std::ifstream` instead of `env::args()` to read command-line arguments. We also need to include the headers for input/output and string conversion. The rest of the code is similar, except that we use `std::string` instead of `String`, and `std::stoll()` instead of `parse::<i32>()`.

