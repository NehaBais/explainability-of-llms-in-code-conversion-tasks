The error occurs because `std::experimental::filesystem` is part of the C++17 standard library, so it's not included in the C++ Standard Library, which is what GCC 8.0 uses by default when compiling with `-std=c++1z`. To fix this, you need to pass the flag `-std=c++17` to the compiler (GCC), and then include `std::experimental::filesystem`. Alternatively, if you're using an older version of C++, you can use `boost::filesystem`, which provides similar functionality.

Here is the corrected code in a single code block:
```cpp
#include  <boost/filesystem.hpp>
#include  <fstream>
#include  <iostream>
namespace fs = boost::filesystem;
int main() {
  if  (fs::exists("input.txt"))
    std::cout <<  "Found input.txt\n";
  else
    std::cout <<  "Not found.\n";

  if  (fs::exists("/input.txt"))
    std::cout <<  "Found /input.txt\n";
  else
    std::cout <<  "Not found.\n";

  if  (fs::is_directory("docs"))
    std::cout <<  "Found docs directory\n";
  else
    std::cout <<  "Not found.\n";

  if  (fs::is_directory("/docs"))
    std::cout <<  "Found /docs directory\n";
  else
    std::cout <<  "Not found.\n";
}
```
