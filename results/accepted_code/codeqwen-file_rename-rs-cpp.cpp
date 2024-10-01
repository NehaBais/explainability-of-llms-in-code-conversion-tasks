#include <filesystem>
#include <iostream>

int main() {
  const std::string err = "File move error";
  if (std::filesystem::exists("input.txt")) {
    std::filesystem::rename("input.txt", "output.txt");
    if (!std::filesystem::exists("output.txt")) {
      std::cerr << err << std::endl;
    }
  } else {
    std::cerr << err << std::endl;
  }

  if (std::filesystem::exists("docs")) {
    std::filesystem::rename("docs", "mydocs");
    if (!std::filesystem::exists("mydocs")) {
      std::cerr << err << std::endl;
    }
  } else {
    std::cerr << err << std::endl;
  }

  // For root directory '/'
  if (std::filesystem::exists("/input.txt")) {
    std::filesystem::rename("/input.txt", "/output.txt");
    if (!std::filesystem::exists("/output.txt")) {
      std::cerr << err << std::endl;
    }
  } else {
    std::cerr << err << std::endl;
  }

  if (std::filesystem::exists("/docs")) {
    std::filesystem::rename("/docs", "/mydocs");
    if (!std::filesystem::exists("/mydocs")) {
      std::cerr << err << std::endl;
    }
  } else {
    std::cerr << err << std::endl;
  }

  return 0;
}