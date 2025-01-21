The error occurs because the `filesystem` namespace is not included. The fix is to include the necessary header file, `<filesystem>`.

```cpp
#include <filesystem>
#include <fstream>
#include <iostream>

using namespace std;
```
