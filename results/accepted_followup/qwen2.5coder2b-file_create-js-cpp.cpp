#include <filesystem> // Include this line
#include <fstream>
#include <iostream>

void createFile(const std::string &filePath, const std::string &content) {
  std::ofstream file(filePath);
  if (!file.is_open()) {
    std::cerr << "Unable to open file: " << filePath << std::endl;
    return;
  }
  file << content;
  file.close();
}

void createDirectory(const std::string &directoryPath) {
  if (std::filesystem::create_directory(directoryPath)) {
    std::cout << "Directory created successfully at: " << directoryPath
              << std::endl;
  } else {
    std::cerr << "Failed to create directory: " << directoryPath << std::endl;
  }
}

int main() {
  // Create the file in current working directory
  createFile("output.txt", "");

  // Create the directory at current working directory
  createDirectory("docs");

  // Create the file in root of filesystem
  createFile("/output.txt", "");

  // Create the directory at root of filesystem
  createDirectory("/docs");

  return 0;
}