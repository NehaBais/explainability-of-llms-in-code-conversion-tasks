#include <algorithm>
#include <iostream>
#include <string>

template <typename T1, typename T2> // Adjust type parameters as needed
T1 max(T1 a, T2 b) {
  return (a > b) ? a : b;
}

std::string
interpolate(std::string str,
            const std::map<std::string, std::string> &replacements) {
  for (const auto &[key, value] : replacements) {
    str = std::regex_replace(str, std::regex(key), value);
  }
  return str;
}

int main() {
  std::string originalString = "Hello little world!";
  std::map<std::string, std::string> replacements = {
      {"little", "big"}, {"name", "Mary"}, {"adj", "little"}};

  std::cout << interpolate(originalString, replacements) << std::endl;

  return 0;
}