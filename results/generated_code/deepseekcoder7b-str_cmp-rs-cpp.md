The C++ standard library provides several string comparison functions in the <string> header file. Here is a simple code snippet that will perform most of your requested tasks, with some additional examples included for good measure. 

Please note that it's recommended to use `std::string` over `const char*` when possible as it provides more flexibility and convenience methods provided by the C++ standard library:
```cpp
#include <iostream>
#include <string>
#include <algorithm> 
#include <cctype>

void to_upper(std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

int main() {
   // Comparing two strings for exact equality 
   const char* a = "abc";
   std::string b("Bac");

   if (a == b) {
       std::cout << "The strings are equal" << std::endl;
   }
   if (a != b.c_str()) {
       std::cout << "The strings are not equal" << std::endl;
   }
   
   // Comparing two strings for inequality 
   if (std::strcmp(a, b.c_str())) {
       std::cout << "The strings are not equal" << std::endl;
   }
    
   // Comparing two strings to see if one is lexically ordered before than the other 
   if (std::strcmp(a, b.c_str()) > 0) {
       std::cout << "The first string is lexically after the second" << std::endl;
   }
   
   // Comparing two strings to see if one is lexically ordered after than the other 
   if (std::strcmp(a, b.c<｜begin▁of▁sentence｜>tr) < 0) {
       std::cout << "The first string is lexically before the second" << std::endl;
   }
   
   // Comparing two strings to see if one is not lexically ordered after than the other 
   if (!(std::strcmp(a, b.c_str()) > 0)) {
       std::cout << "The first string is not lexically before the second" << std::endl;
   }
   
   // Comparing two strings to see if one is not lexically ordered before than the other 
   if (!(std::strcmp(a, b.c_str()) < 0)) {
       std::cout << "The first string is not lexically after the second" << std::endl;
   }
   
   // Comparing two strings to see if one is equal when ignoring case 
   std::string a1 = "abc";
   std::string b1("Bac");
   
   to_upper(a1); to_upper(b1);
    
   if (std::strcmp(a1.c_str(), b1.c_str()) == 0) {
       std::cout << "Both strings are equal when ignoring case" << std::endl;
   }
   
   // Comparing numeric string lexically
   const char* numStr1 = "123";
   const char* numStr2 = "456";
    
   if (std::strcmp(numStr1, numStr2) < 0) {
       std::cout << "The first numeric string is lexically before the second" << std::endl;
   }
   
   return 0;
}
```
This code will print a variety of statements based on whether or not the conditions are met. The comparison functions used in this example are `std::strcmp()` for lexicographic comparisons and `std::transform()` along with the usage of ::toupper function to convert string into uppercase for case insensitive comparisons.

