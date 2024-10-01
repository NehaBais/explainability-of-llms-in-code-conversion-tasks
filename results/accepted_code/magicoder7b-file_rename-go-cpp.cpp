#include <filesystem>
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
    std::filesystem::rename("/input.txt", "/output.txt");
    std::filesystem::rename("/docs", "/mydocs");
  } catch (const std::error_code &ec) {
    std::cerr << "Error: " << ec.message() << "\n";
    return 1;
  }

  return 0;
}