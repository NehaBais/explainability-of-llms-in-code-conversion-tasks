#include
#include
int main() {
  // Verify existence of "docs/input.txt" in the current working directory
  std::ifstream file("docs/input.txt");
  if (file) {
    file.close();
    std::cout << "File exists: docs/input.txt" << std::endl;
  } else {
    std::cerr << "Error: File does not exist: docs/input.txt" << std::endl;
  }

  // Verify existence of "docs/input.txt" in the filesystem root
  file.open("/docs/input.txt");
  if (file) {
    file.close();
    std::cout << "File exists: /docs/input.txt" << std::endl;
  } else {
    std::cerr << "Error: File does not exist: /docs/input.txt" << std::endl;
  }

  return 0;
}