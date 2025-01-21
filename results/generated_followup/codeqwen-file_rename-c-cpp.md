Error: "no member named 'filesystem' in namespace 'std'"

Fix: Include <filesystem> header

Corrected code: 

```cpp
#include <filesystem>
#include <iostream>

int main() {
    std::filesystem::rename("input.txt", "output.txt");
    std::filesystem::rename("docs", "mydocs");
    std::filesystem::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");
    return 0;
}
```
