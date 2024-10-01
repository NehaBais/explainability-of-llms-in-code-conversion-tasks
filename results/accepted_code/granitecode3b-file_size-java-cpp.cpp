#include
#include
#include
int main() {
  std::ifstream fileA("file.txt");
  if (fileA) {
    std::cout << fileA.tellg().seekp(0, std::ios_base::end).tellg() << " B"
              << std::endl;
    fileA.close();
  }
  std::ifstream fileB("/file.txt");
  if (fileB) {
    std::cout << fileB.tellg().seekp(0, std::ios_base::end).tellg() << " B"
              << std::endl;
    fileB.close();
  }
  return 0;
}