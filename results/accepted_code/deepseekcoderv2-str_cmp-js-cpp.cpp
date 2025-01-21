#include <algorithm> // for toLowerCase
#include <iostream>
#include <string>

int main() {
  std::cout << (std::string("abcd") == std::string("abcd")) << "\n"; // true
  std::cout << (std::string("abcd") == std::string("abcd")) << "\n"; // true
  std::cout << (123 == std::string("123")) << "\n";                  // true
  std::cout << (123 == std::string("123")) << "\n";                  // false
  std::cout << (std::string("ABCD") == std::string("abcd")) << "\n"; // false
  std::cout << (std::string("ABCD") != std::string("abcd")) << "\n"; // true
  std::cout << (123 != std::string("123")) << "\n";                  // false
  std::cout << (123 != std::string("123")) << "\n";                  // true
  std::cout << (std::string("abcd") < std::string("dcba")) << "\n";  // true
  std::cout << (std::string("abcd") > std::string("dcba")) << "\n";  // false
  std::string abcd = "ABCD";
  std::transform(abcd.begin(), abcd.end(), abcd.begin(), ::tolower);
  std::string abcd_lower = "abcd";
  std::transform(abcd_lower.begin(), abcd_lower.end(), abcd_lower.begin(),
                 ::tolower);
  std::cout << (abcd_lower == abcd) << "\n"; // true (case insensitive)

  return 0;
}