#include
#include
int main() {
  std::filesystem::rename("input.txt", "output.txt");
  std::filesystem::rename("c:\\input.txt", "c:\\output.txt");
  std::filesystem::rename("docs", "mydocs");
  std::filesystem::rename("c:\\docs", "c:\\mydocs");
  return 0;
}