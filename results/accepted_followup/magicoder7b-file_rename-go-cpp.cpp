#include <filesystem> // C++17 or later
#include <iostream>
#include <system_error>

int main() {
  try {
    std::rename("input.txt", "output.txt");
    std::rename("docs", "mydocs");

    // This requires root privileges
    // On Windows, you need to run as administrator
    // On Unix-like systems, you typically use sudo or a similar command to run
    // with root permissions

#if __cplusplus >= 201703L || defined(__clang__) && __has_include(<filesystem> )
    std::filesystem::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");
#else
    // for older compilers, use <experimental/filesystem>:
    std::experimental::filesystem::rename("/input.txt", "/output.txt");
    std::experimental::filesystem::rename("/docs", "/mydocs");
#endif
  } catch (const std::error_code &ec) {
    std::cerr << "Error: " << ec.message() << "\n";
    return 1;
  }

  return 0;
}