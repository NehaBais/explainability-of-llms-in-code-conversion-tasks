Error: No member named 'experimental' in namespace 'std'.
Fix: Add `#include <filesystem>` to the beginning of the code, and use `std::filesystem` instead of `std::experimental::filesystem`.
Corrected Code Block:

```cpp
#include <filesystem>

namespace fs = std::filesystem;

void mkdirp(const std::string &path) { fs::create_directories(path); }
```
