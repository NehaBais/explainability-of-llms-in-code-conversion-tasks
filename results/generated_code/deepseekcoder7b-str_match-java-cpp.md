Below is the C++ code that performs the same operations as given in the Java example. The functions used are 'std::string' in C++, which have corresponding methods to perform these operations:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "abcd"; 
    string str2 = "ab";

    // Determining if the first string starts with second string
    bool startsWithResult = str1.rfind(str2, 0) == 0 ? true : false;
    cout << "startsWith: " << (startsWithResult ? "true" : "false") << endl;
    
    str1 = "abcd"; 
    str2 = "zn";
    // Determining if the first string ends with second string
    bool endsWithResult = str1.find(str2) == (str1.length() - str2.length()) ? true : false;
    cout << "endsWith: " << (endsWithResult ? "true" : "false") << endl;
    
    str1 = "abab"; 
    str2 = "bb";
    // Determining if the first string contains the second string at any location
    bool containsResult = str1.find(str2) != std::string::npos ? true : false;
    cout << "contains: " << (containsResult ? "true" : "false") << endl;
    
    // Handle multiple occurrences of a string for part 2.
    str1 = "abab"; 
    str2 = "ab";
    size_t loc = 0;
    while((loc = str1.find(str2, loc)) != std::string::npos) {
        cout << "Found at: " << loc << endl;
        ++loc;
    } 
    
    return <｜begin▁of▁sentence｜>0;
}
```

This C++ code uses the `std::string` methods find and rfind for startsWith and endsWith, and contains. The first one (rfind) takes two arguments - the string to look for and starting position in the original string. If it finds the substring at the beginning of original string, then it returns 0. Otherwise, return value is not 0.

The second method (find) also takes a string as argument but only one more parameter which is the start index from where search will be performed. It returns std::string::npos if it does not find the substring in the original string. The found location can be obtained by subtracting length of second string from returned value.

