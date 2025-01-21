#include
#include
#include

void createDirectories(const std::string &path) {
  try {
    std::filesystem::path dirPath(path);

    if (std::filesystem::create_directories(dirPath)))) {
      std::cout << "Directory created successfully\n";
    }
    else {
      std::cerr << "Failed to create directory\n";
    }
  } catch (const std::exception &e)) {
    std::cerr << "Exception caught: " << e.what() << '\n';
  }
}

int main() {
  std::string path = "C:/parent/test";

  // Create directories if they do not exist
  if (std::filesystem::create_directories(path)))) {
    std::cout << "Directory created successfully\n";
  }
  else {
    std::cerr << "Failed to create directory\n";
  }

  return 0;
}