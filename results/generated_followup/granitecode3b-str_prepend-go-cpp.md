The error occurs because the `std` namespace is not declared, so C++ cannot find the `string` class. To fix this error, we need to include the `iostream` header file which declares the `std::string` class. Here's the corrected code in a single line:
```cpp
#include 
std::string s("world!");
s = "Hello, " + s;
```

