Here is the C++ code that fulfills the requirements:
```cpp
#include 
#include 
int main() {
 std::string s1 = "hello";
 std::cout << s1 + " world" << std::endl;
 std::string s2 = s1 + " world";
 std::cout << s2 << std::endl;
 s1 = "hello";
 std::vector strs = {"world", "mom"};
 std::string s3 = ", ".join(strs);
 std::cout << ", ".join({s1, s3}) << std::endl;
 std::string s4 = ", ".join({s1, s3});
 std::cout << s4 << std::endl;
 return 0;
}
```
This code creates a string variable `s1` with the value "hello", concatenates it with the string literal " world" to create `s2`, and then changes the value of `s1` to "hello" again before concatenating it with the same two strings in a different order. 
It also creates a vector of strings called `strs` with the values "world" and "mom", concatenates them with `s1` using the `join()` method, and stores the result in `s3`. Finally, it concatenates `s1` and `s3` using the `join()` method again to create `s4`, and prints out all four variables to show their values.

