#include <iostream>
#include <map>
#include <string>

int main() {
  std::string original = "This is a test";
  std::string value = "test";
  std::map<std::string, std::string> replacements = {{"adj", "little"},
                                                     {"name", "Mary"}};
  size_t pos = original.find("{" + replacements.begin()->first + "}");
  if (pos != std::string::npos) {
    std::string interpolated = original.replace(pos, 1, value);
    std::cout << interpolated << std::endl;
  }

  return 0;
}