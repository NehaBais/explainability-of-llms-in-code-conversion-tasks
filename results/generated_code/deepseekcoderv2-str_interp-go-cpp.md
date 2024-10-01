## Solution 1:

```cpp
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "Mary had a %s lamb";
    replace(str.begin(), str.end(), "%s", "little");
    cout << str << endl;
    return 0;
}
```

