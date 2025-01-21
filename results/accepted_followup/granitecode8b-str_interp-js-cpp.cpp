#include
int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";
  std::string replaced = original;
  size_t pos = replaced.find("X");
  if (pos != std::string::npos) {
    replaced.replace(pos, 1, little);
  }
  std::cout << replaced << std::endl;
  return 0;
}