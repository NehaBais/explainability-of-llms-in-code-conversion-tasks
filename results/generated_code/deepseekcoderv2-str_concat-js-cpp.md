Answer:
```cpp
#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1 = "Hello";
    cout << str1 << endl;
    string str2 = str1.append(" world!"); //or 
    str2 = str1 + " world!";
    cout << str2 << endl;
}
```
