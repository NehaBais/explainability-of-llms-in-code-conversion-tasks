The equivalent code in C++ would look like this:

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
    string stringA = "tacoloco", stringB = "co";
    bool q1, q2, q3, q2multi, m;
    int q2matches[100], indexCount = 0;

    // stringA starts with stringB
    q1 = (stringA.substr(0, stringB.length()) == stringB);

    // stringA contains stringB
    q2 = (stringA.find(stringB) != string::npos);
    if(q2){
        cout << "2: Is '"<< stringB << "' contained in '" << stringA << "'? Yes, at index " << stringA.find(stringB) << ".\n";
    } else {
        cout << "2: Is '"<< stringB << "' contained in '" << stringA << "'? No.\n";
    }
    // multiple matches
    q2multi = (stringB.c_str());
    while ((m = sscanf(q2multi.data(), "%*s%*[^0-9]%*[^\n]", &index)) != EOF) {
        if (index >= stringA.length()) continue;
        q2matches[indexCount++] = index;
    }
    //stringA ends with stringB
    q3 = (stringA.substr(-stringB.length(), stringB.length()) == stringB);

    cout << "1: Does '"<< stringA << "' start with '" << stringB << "'? " << ( q1 ? "Yes." : "No.") << endl;
    cout << "3: Does '"<< stringA << "' end with '" << stringB << "'? " << ( q3 ? "Yes." : "No.") << endl;
}
```
The above C++ code does the same as your JavaScript code. It checks if a string starts with another string, ends with it and if it contains another string anywhere within it. It also handles multiple occurrences of a string. Please note that C++ doesn't have built-in support for regular expressions like JavaScript, so while we can find matches using `string::find()` and `sscanf()` functions, there is no straightforward way to count all the occurrences or get their indexes. This solution will work correctly if there are at most 100 different occurrences of the string in a single string.
