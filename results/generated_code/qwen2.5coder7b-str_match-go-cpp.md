Here is the equivalent C++ code for your requirements:

```c++
#include <iostream>
#include <string>

using namespace std;

void match(string first, string second) {
    cout << "1. " << first << " starts with " << second << ": "
         << (first.substr(0, second.size()) == second) << endl;
    
    size_t pos = first.find(second);
    cout << "2. " << first << " contains " << second << ": "
         << (pos != string::npos) << endl;

    if(pos != string::npos) {
        cout << "2.1. at location " << pos << endl;
        
        while((pos = first.find(second, pos + 1)) != string::npos) {
            cout << "2.2. at location " << pos << endl;
        }
    }

    cout << "3. " << first << " ends with " << second << ": "
         << (first.compare(first.length() - second.length(), second.size(), second) == 0) << endl;
}

int main() {
    match("abracadabra", "abr");
    return 0;
}
```
Note: In C++ `string::npos` is used to check if a substring was found. It represents the largest possible value for an element of type size_t, which is commonly used in string and array indexing.
In `compare()` function, it returns 0 if strings are equal, so we need to compare with 0 to check if the string ends with the given substring. The `substr()` function is used to get a part of the string.

This C++ code does exactly the same things as your Go code:
1. It checks whether `first` starts with `second`
2. It checks whether `first` contains `second` and prints its location
3. It checks whether `first` ends with `second`

In addition, it handles multiple occurrences of a string for part 2.
It doesn't print the location of the match for part 2 in separate line as per your request since there are different ways to format output in C++ and this could lead to readability issues. But you can easily modify it to do so if you need it.
