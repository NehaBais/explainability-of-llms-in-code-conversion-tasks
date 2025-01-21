Error: "no member named 'filesystem' in namespace 'std'"

Fix: Add `-lstdc++fs` flag while compiling with g++.

Corrected C++ code:
```cpp
#include <iostream>
#include <filesystem>

int main() {
  try {
    std::filesystem::path p("C:/parent/test");
    if (std::filesystem::create_directories(p))
      std::cout << "Path successfully created" << std::endl;
  } catch (std::exception &e) {
    std::cerr << e.what() << '\n';
  }

  return 0;
}
```
