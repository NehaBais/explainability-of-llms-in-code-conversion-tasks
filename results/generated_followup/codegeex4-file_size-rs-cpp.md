The error occurred because `std::filesystem` is not included. The C++17 standard library includes filesystem support with the `<filesystem>` header, which must be included for the code to compile correctly.

To fix this issue, add `#include <filesystem>` at the beginning of your file before including other headers.

Corrected Code:

```cpp
#include <cstdlib>
#include <filesystem> // added
#include <iostream>

void exit_err(const std::string &msg, int code) {
  std::cerr << "Error: " << msg << "\n";
  std::exit(code);
}

int main() {
  const char *file_name = getenv("1");
  if (!file_name) {
    exit_err("No file name supplied", 1);
  }

  std::error_code ec;
  auto metadata = std::filesystem::metadata(file_name, ec);

  if (ec) {
    exit_err(ec.message(), 2);
  }

  std::cout << "Size of " << file_name << " is " << metadata.file_size()
            << " bytes\n";
}
```
