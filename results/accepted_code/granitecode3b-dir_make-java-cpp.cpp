#include
#include

void createDirectory(std::string path) {
  std::filesystem::create_directories(path);
}
int main() {
  std::string path = "C:/parent/test";
  try {
    createDirectory(path);
    std::cout << "Directory created successfully" << std::endl;
  } catch (const std::exception &e) {
    std::cerr << "Error creating directory: " << e.what() << std::endl;
  }
  return 0;
}