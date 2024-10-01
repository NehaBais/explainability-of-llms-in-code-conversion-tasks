#include
#include
#include
#include
const std::string FILE_NAME = "output.txt";
const std::string DIR_NAME = "docs";
int main() {
  create(".", ".");
  create("/", "/");
  return 0;
}
std::filesystem::create_directory(path);
std::ofstream file(path / filename);