Here's the equivalent C++ code that meets the requirements you specified:
```
#include 
#include 
int main() {
 std::string s = "World";
 s.insert(0, "Hello ");
 std::cout << s << std::endl;
 return 0;
}
```
In this code, we first include the necessary headers for input/output and string manipulation. We then create a main function that returns an integer value.
Inside the main function, we declare a string variable `s` and initialize it with the value "World". We then use the `insert` method to prepend the string "Hello " to `s`. Finally, we print out the contents of `s` using `std::cout`.
Note that in C++, we use `std::string` instead of `String`, and we use `std::endl` instead of `println!()`.

