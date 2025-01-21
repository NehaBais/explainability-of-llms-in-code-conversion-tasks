The error occurs because `std::setfill` and `std::setw` are not members of the std namespace, which is causing an error when compiling C++ code.

To fix this error, you need to include the necessary header file for these functions: `<iomanip>`. This should be added at the beginning of your code.

The corrected code will look like this:
```cpp
#include <iomanip>
// Rest of your code
```
