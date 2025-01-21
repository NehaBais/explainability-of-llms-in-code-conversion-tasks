The error occurs because the `std::format` function is not available in the C++ standard library. The fix is to include the `<format>` header file.

```cpp
#include <format>
#include <iostream>
#include <string>
```
