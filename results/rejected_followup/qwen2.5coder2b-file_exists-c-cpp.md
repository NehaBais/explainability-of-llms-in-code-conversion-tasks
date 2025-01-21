The error is because C++17 introduced `std::filesystem` and the namespaces have changed from `sys` to `std`. 
To fix the error, simply replace `sys/types.h`, `sys/stat.h`, `stdio.h`, and `unistd.h` with `<filesystem>`, `#include <iostream>` in your code.
