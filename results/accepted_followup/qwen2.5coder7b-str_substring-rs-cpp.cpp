#include <iostream>
#include <string>
#include <vector>

void printSubstring(const std::u32string &str, size_t start, size_t length) {
  auto segments = str;
  std::u32string result;
  for (size_t i = 0; i < length && i + start < segments.size(); ++i) {
    result += segments[start + i];
  }
  std::cout << result << std::endl;
}

int main() {
  std::u32string s = U"abc文字化けdef";
  size_t n = 2;
  size_t m = 3;

  // Print 3 characters starting at index 2 (c文字)
  printSubstring(s, n, m);

  // Print all characters starting at index 2 (c文字化けdef)
  printSubstring(s, n, s.size() - n);

  // Print all characters except the last (abc文字化けde)
  printSubstring(s, 0, s.size() - 1);

  // Find the position of 'b' and print 3 characters starting with 'b' (bc文)
  auto bpos = std::find(s.begin(), s.end(), U'b');
  if (bpos != s.end()) {
    printSubstring(s, bpos - s.begin(), m);
  } else {
    std::cout << "Character 'b' not found." << std::endl;
  }

  // Find the position of "けd" and print 3 characters starting with "けd"
  // (けde)
  auto kesepos = s.find(U"けd");
  if (kesepos != std::string::npos) {
    printSubstring(s, kesepos, m);
  } else {
    std::cout << "Substring \"けd\" not found." << std::endl;
  }

  return 0;
}