Here's how you can convert the Java code to C++: 

```cpp
#include <iostream>
#include <algorithm>

void compareStrings(std::string A, std::string B) {
    if (A == B) {
        std::cout << "'" << A << "' and '" << B << "' are lexically equal.\n"; 
    } else {
        std::cout << "'" << A << "' and '" << B << "' are not lexically equal.\n"; 
    }

    if (std::equal(A.begin(), A.end(), B.begin(), B.end(), 
                  [](char a, char b) { return std::toupper(a) == std::toupper(b); })){
        std::cout << "'" << A << "' and '" << B << "' are case-insensitive lexically equal.\n"; 
    } else{
        std::cout << "'" << A << "' and '" << B << "' are not case-insensitive lexically equal.\n"; 
    }

    if (A < B) {
        std::cout << "'" << A << "' is lexically before '" << B << "'.\n"; 
    } else if (A > B){
        std::cout << "'" << A << "' is lexically after '" << B << "'.\n";  
    }   

    if (A >= B) {
        std::cout << "'" << A << "' is not lexically before '" << B << "'.\n"; 
    }
    if (A <= B) {
        std::cout << "'" << A << "' is not lexically after '" << B << "'.\n"; 
    }   

    std::cout << "The lexical relationship is: " << A.compare(B)<<'\n';  
    // C++ strings have no function similar to compareToIgnoreCase in Java, so we use a lambda function for case-insensitive comparison 
    size_t equalChars = std::mismatch(A.begin(), A.end(), B.begin(), B.end(), 
                  [](char a, char b) { return std::toupper(a) == std::toupper(b); }).first - A.begin();
    std::cout << "The case-insensitive lexical relationship is: " << (A.size() < B.size() ? -1 : (A.size() > B.size() ? 1 : equalChars))<<'\n';  
}

int main(){
    compareStrings("Hello", "Hello");
    // In C++, the numeric strings are compared lexically i.e. '5' is smaller than '5.0' as per ASCII value of characters. 
    compareStrings("5", "5.0");  
    compareStrings("java", "Java");  
    // For non-english alphabets, the order may not be accurate due to different language standards. 
    compareStrings("ĴÃVÁ", "ĴÃVÁ");  
    compareStrings("ĴÃVÁ", "ĵãvá");   
    return 0;
}
```
