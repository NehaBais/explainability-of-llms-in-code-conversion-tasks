 In C++, the code would look like this:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "hello";
    cout << s << endl;
    
    string s1 = s + " world";
    cout << s1 << endl;

    return 0;
}
```

This code works exactly like the Rust version. It declares a `string` variable `s`, assigns it the value `"hello"`, then prints its content with `cout`. After that, it concatenates `s` with `" world"` and stores the result in another string `s1`. The content of `s1` is then printed to console.
