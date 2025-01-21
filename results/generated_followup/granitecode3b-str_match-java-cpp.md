Fix: #include <iostream>
Rewritten code:
```c++
#include <iostream>
int main() {
    string str1 = "Hello, world!";
    string str2 = "world";
    bool result1 = str1.find(str2) != string::npos;
    cout << "Does " << str1 << " contain " << str2 << "?: " << result1 << endl;
    bool result2 = str1.find(str2) != string::npos;
    cout << "Does " << str1 << " contain " << str2 << "?: " << result2 << endl;
    bool result3 = str1.rfind(str2) != string::npos;
    cout << "Does " << str1 << " end with " << str2 << "?: " << result3 << endl;
}
```

