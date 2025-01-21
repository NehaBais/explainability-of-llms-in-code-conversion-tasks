#include <iostream>
#include <string>

// Function to perform string interpolation
std::string
interpolate(std::string str,
            const std::map<std::string, std::string> &replacements) {
  for (const auto &[key, value] : replacements) {
    str = str.replace(str.find(key), key.length(), value);
  }
  return str;
}

int main() {
  // Original string
  std::string originalString = "Mary had a X lamb.";

  // Replacements
  std::map<std::string, std::string> replacements;

  // Case 1: Replacement by order
  replacements["little"] = "big";
  std::cout << interpolate(originalString, replacements) << std::endl;

  // Case 2: Named arguments
  replacements.clear();
  replacements.insert({"name", "Mary"});
  replacements.insert({"adj", "little"});
  std::cout << interpolate(originalString, replacements) << std::endl;

  return 0;
}