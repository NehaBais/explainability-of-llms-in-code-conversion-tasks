#include
#include
int main() {
  std::filesystem::path path = "./path/to/dir";
  if (!std::filesystem::exists(path)) {
    try {
      std::filesystem::create_directories(path);
    } catch (const std::exception &e) {
      std::cerr << "Error creating directory: " << e.what() << std::endl;
      return 1;
    }
  }
  return 0;
}