Below is the equivalent C++ code for the Golang program you provided. The program uses the `std::cout` and `std::string` classes from the `iostream` and `string` headers respectively.

```cpp
#include <iostream>
#include <string>
using namespace std;

void match(const string& first, const string& second) {
    cout << "1. " << first << " starts with " << second << ": ";
    cout << (first.find(second) == 0 ? "true" : "false") << endl;

    size_t i = first.find(second);
    cout << "2. " << first << " contains " << second << ": ";
    if (i != string::npos) {
        cout << "true";
        for (size_t j = i+1;; j++) {
            i  = first.find(second, j);
            if (i == string::npos) break;
            cout << ", at location " << i;
        }
    } else {
        cout << "false";
    }
    cout << endl;

    cout << "3. " << first << " ends with " << second << ": ";
    cout << (first.rfind(second) == first.length() - second.length() ? "true" : "false") << endl;
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```
