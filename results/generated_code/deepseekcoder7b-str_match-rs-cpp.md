In C++, you can use `std::string` class methods as follows to achieve similar functionality:
```cpp
#include<iostream>
#include<string>
using namespace std;

void printMatch(size_t possible_match) {
    if (possible_match != string::npos){
        cout << "Found match at pos " << possible_match << endl;
    } else{
        cout << "Did not find any matches" << endl;
    }
}

int main() 
{
    string s1 = "abcd";
    string s2 = "abab";
    string s3 = "ab";
    
    // Determining if the first string starts with second string
    if (s1.rfind(s3) == 0){
        cout << "String 1 does start with String 3" << endl;
    } else {
        cout << "String 1 does not start with String 3" << endl;
    }
    
    // Determining if the first string contains the second string at any location
    size_t found = s1.find(s3);
    printMatch(found);  
    
    found = s1.find(s2);
    printMatch(found); 
    
    // Determining if the first string ends with the second string
    if (s2.compare(s2.length() - s3.length(), s3.length(), s3) == 0){
        cout << "String 2 does end with String 3" << endl;
    } else {
        cout << "String 2 does not end with String 3" << endl;
    }
    
    return 0;
}
```
This C++ code performs the same operations as your Rust code. It checks if `s1` starts with `s3`, contains `s3` (printing its position using `find()`), and ends with `s3`. Please note that in C++ string indices start at 0.

