Here is the equivalent code in C++:

```C++
#include <iostream>
#include <string>
using namespace std;

string join(vector<string> words, string delimiter) {
    string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        result += words[i];
        if (i != words.size() - 1) {
            result += delimiter;
        }
    }
    return result;
}

int main() {
    string s1 = "hello";
    cout << s1 + " world" << endl;

    string s2 = s1 + " world";
    cout << s2 << endl;

    s1 = "hello";
    vector<string> words = {"world", "mom"};
    string s3 = join(words, ", ");
    cout << s3 << endl;

    string s4 = join(words, ", ");
    cout << s4 << endl;

    return 0;
}
```
