#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

std::string substr_from_known_char_and_of_m_length(const std::string &str,
                                                   char c, size_t m) {
  // Dummy implementation
  return "";
}

std::string substr_from_known_char_up_to_end(const std::string &str, char c) {
  // Dummy implementation
  return "";
}

int main() {
  std::vector<uint32_t> code_points = {
      0x4E16}; // Example unicode point for '世'

  // Using C++98 equivalent without range-based for loop
  for (size_t i = 0; i < code_points.size(); ++i) {
    uint32_t cp = code_points[i];
    // Process cp here
  }

  std::string str = "世界";
  char target_char = '世';

  // Using C++98 equivalent without auto and large character literals
  std::vector<uint32_t>::iterator it1 =
      std::find(code_points.begin(), code_points.end(), 0x4E16);
  if (it1 != code_points.end()) {
    size_t index = std::distance(code_points.begin(), it1);
    // Process index here
  }

  auto result1 = substr_from_known_char_and_of_m_length(str, target_char, 1);
  auto result2 = substr_from_known_char_up_to_end(str, target_char);

  std::cout << result1 << result2 << std::endl;

  return 0;
}