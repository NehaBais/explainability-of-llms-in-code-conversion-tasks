Here is the converted code from Golang to C++:
```cpp
#include 
#include 
using namespace std;
int main() {
    string str = "Mary had a %s lamb";
    string txt = "little";
    string out = fmt.Sprintf(str, txt);
    cout << out << endl;
    return 0;
}
```
In this C++ code, we have used the `fmt` library to perform string interpolation. The `%s` in the string is a placeholder for the value of the `txt` variable. We pass the `txt` variable as an argument to the `Sprintf` function, which replaces the `%s` placeholder with the value of `txt`. Finally, we print the interpolated string using `cout`.

