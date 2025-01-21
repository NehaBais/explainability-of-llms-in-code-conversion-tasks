The error is due to the fact that `std::filesystem` namespace does not exist before C++17. You are trying to use a feature of C++17 in your code, which results in an error if you compile it with a version of g++ older than 8 (because C++17 was introduced in GCC 8).

The fix is simply to replace `std::filesystem` with `boost::filesystem` as the `<filesystem>` library that you are trying to use does not exist before C++17 and moreover, it's part of Boost Library which is not a standard library in C++.

Here is the corrected code using `boost::filesystem`:

```cpp
#include <boost/filesystem.hpp>

void mkdirp(std::string const& path) {
    if (!boost::filesystem::exists(path)) {
        boost::filesystem::create_directories(path);
    }
}
```
