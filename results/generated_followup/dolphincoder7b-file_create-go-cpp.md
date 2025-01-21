The error message indicates that the `filesystem` namespace is not found, as it's not included in the standard libraries of C++. To resolve this issue, we need to include the `<filesystem>` header in the C++ code.

```cpp
#include  <filesystem>
#include  <fstream>
#include  <iostream>

using namespace std;

// The rest of the code remains unchanged.
```
