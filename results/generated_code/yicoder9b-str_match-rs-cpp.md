Sure, here is how you can convert this Rust code to C++:

```cpp
#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;

void printMatch(size_t pos) {
    if (pos == string::npos)
        cout << "Did not find any matches\n";
    else
        cout << "Found match at pos " << pos << '\n';
}

int main() {
    string s1 = "abcd";
    string s2 = "abab";
    string s3 = "ab";

    // Determining if the first string starts with second string
    if (s1.substr(0, s3.size()) == s3) 
        cout << "s1 starts with s3\n"; 
    else 
        cout << "s1 does not start with s3\n";   

    // Determining if the first string contains the second string at any location
    printMatch(s1.find(s3)); // Found match at pos 0
    printMatch(s1.find(s2)); // Did not find any matches

    // Print the location of the match
    size_t found = s1.find(s3);
    while (found!=string::npos){
        cout << "Found another match at pos "<< found << '\n'; 
        found = s1.find(s3,found+1);
    }  
   // Determining if the first string ends with the second string
    if (s2.compare(s2.length() - s3.length(), s3.length(), s3) == 0)
        cout << "s2 ends with s3\n";     
    else 
        cout << "s2 does not end with s3\n";       
   return 0;
}
```
