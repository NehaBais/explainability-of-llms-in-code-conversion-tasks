#include
#include
int main() {
  std::ifstream file("input.txt");
  if (file) {
    std::cout << file.tellg().seekp(0, std::ios_base::end).tellg() << " B"
              << std::endl;
    file.close();
  }
  return 0;
}