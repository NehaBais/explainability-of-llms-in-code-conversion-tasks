#include <cstdlib> // Additional library for 'std::at_exit'
#include <filesystem>
#include <iostream>

const std::string inputFileName{"input.txt"};

static auto checkFileSize = [](const std::string &fileName) {
  if (std::filesystem::exists(fileName)) {
    return std::to_string(std::filesystem::file_size(fileName));
  } else {
    throw std::runtime_error("File does not exist");
  }
};

int main() {
  try {
    std::cout << "Size of current directory's '" << inputFileName
              << "': " << checkFileSize(inputFileName + "") << '\n';
    std::cout << "Size of root directory's '" << inputFileName
              << "': " << checkFileSize("/" + inputFileName) << '\n';
  } catch (const std::exception &e) {
    std::cerr << e.what() << "\n";
    return EXIT_FAILURE;
  }

  // Exit when program finishes successfully
  std::at_exit([] { std::cout << "Program finished successfully.\n"; });

  return 0;
}