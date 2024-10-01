Here is the equivalent C++ code for the provided Rust program.
Note that C++ does not have built-in support for case-insensitive string comparison, hence we use `std::transform` with `std::toupper` to convert both strings into uppercase before comparing:
```cpp
#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
 
using namespace std;

// Function that converts a string to upper case.
void ToUpper(std::string& str){
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}
 
int main(){
    string a = "abc";
    string b = "Bac";
   
    // Comparison of strings using relational operators (==,!=) are case-sensitive in C++.
    if(a == b){ cout << "The strings are equal\n"; } 
    else{ cout << "The strings are not equal\n";}
   
    // Comparison of strings using > and < operators are lexicographically (dictionary order) case-sensitive in C++.
    if(a > b){cout << "The first string is lexically after the second\n" ; } 
    else if(a < b){ cout << "The first string is lexically before the second\n";}  
   
    // For case insensitive comparison, convert both strings to upper or lower case and then compare.
    ToUpper(a);
    ToUpper(b); 
     
    if(a == b){ cout << "Both strings are equal when ignoring case\n"; } 
    else{cout << "The strings are not equal when ignoring case\n" ;}  
   
    return 0;
}
```
