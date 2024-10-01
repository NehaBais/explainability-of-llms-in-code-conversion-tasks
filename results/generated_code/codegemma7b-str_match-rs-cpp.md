```cpp
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s1 = "abcd";
    string s2 = "abab";
    string s3 = "ab";

    // Determining if the first string starts with second string
    if (s1.find(s3) == 0) {
        cout << "s1 starts with s3" << endl;
    } else {
        cout << "s1 does not start with s3" << endl;
    }

    // Determining if the first string contains the second string at any location
    if (s1.find(s3) != string::npos) {
        cout << "s1 contains s3" << endl;
        // Print the location of the match
        cout << "Location of the match: " << s1.find(s3) << endl;
    } else {
        cout << "s1 does not contain s3" << endl;
    }

    // Determining if the first string ends with the second string
    if (s1.rfind(s3) == s1.size() - s3.size()) {
        cout << "s1 ends with s3" << endl;
    } else {
        cout << "s1 does not end with s3" << endl;
    }

    return 0;
}
```

**Output:**

s1 starts with s3
s1 contains s3
Location of the match: 0
s1 does not end with s3
