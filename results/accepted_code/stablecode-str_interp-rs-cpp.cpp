#include <iostream>
#include <map>
#include <string>

int main() {
  std::map<std::string, std::string> interpolations;
  interpolations["X"] = "little";

  std::string original_str = "Mary had a X lamb.";
  std::string result_str = "";

  for (size_t i = 0; i < original_str.length(); ++i) {
    if (original_str[i] == 'X') {
      result_str += interpolations["X"];
    } else if (original_str[i] != ' ') {
      result_str += original_str[i];
    }
  }

  std::cout << result_str << std::endl;

  return 0;
}