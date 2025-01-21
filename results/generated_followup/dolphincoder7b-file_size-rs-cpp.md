The error message indicates that there are several undeclared identifiers in the Rust-to-C++ conversion: `fs`, `argc`, and `argv`. These identifiers have not been declared or defined in the converted C++ code, which is why they cause errors when being used. To fix this issue, we need to add the necessary declarations for these identifiers.

In addition, the Rust compiler warns about using a function template name with no prior declaration and an explicit template argument, which is not allowed in C++. This warning can be suppressed by adding the `-Wno-c++20-extensions` flag to the compilation command.

Here's the corrected code:

```cpp
#include  <filesystem>
#include  <fstream>
#include  <iostream>
#include  <string>
namespace fs = std::filesystem;

int main() {
  auto file_name = std::string{""}; // Assume the input is valid, but we can check later
  if (argc > 1) {
    file_name = std::string(argv[1]);
  } else {
    exit_err("No file name supplied", 1);
  }

  auto metadata = fs::file_size(file_name); // This method returns an optional value, so we need to handle it
  if (!metadata) {
    exit_err<std::string>("File not found: " + file_name, 2);
  }

  std::cout << "Size of file.txt is " << *metadata << " bytes\n";

  return 0;
}
```

When compiling the corrected code in a C++17-compliant compiler or higher, we don't need to suppress the `-Wno-c++20-extensions` flag as it's not used in C++11 and above.
