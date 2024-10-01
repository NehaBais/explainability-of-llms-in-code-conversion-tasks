#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string s = "ABCDEFGH";
  int n = 2; // start index
  int m = 3; // length of the substring to print

  // for reference
  for (char c : s) {
    std::cout << c << ' ';
  }
  std::cout << '\n';

  // starting from n characters in and of m length
  if (n + m <= s.length())
    std::cout << "Start " << n << ", length " << m << ":  " << s.substr(n, m)
              << '\n';
  else
    std::cout << "Start " << n << ", length " << m << ":   Index out of range."
              << '\n';

  // starting from n characters in, up to the end of the string
  if (n <= s.length())
    std::cout << "Start " << n << ", to end:      " << s.substr(n) << '\n';
  else
    std::cout << "Start " << n << ", to end:       Index out of range." << '\n';

  // whole string minus last character
  if (s.length() > 1) {
    std::cout << "All but last:         " << s.substr(0, s.length() - 1)
              << '\n';
  } else
    std::cout << "All but last:       String too short." << '\n';

  // starting from a known character within the string and of m length
  size_t dx = s.find('D');
  if (dx != std::string::npos) {
    if (dx + m <= s.length())
      std::cout << "Start 'D', length " << m << ":  " << s.substr(dx, m)
                << '\n';
    else
      std::cout << "Start 'D', length " << m << ":    Index out of range."
                << '\n';
  } else {
    std::cout << "Start 'D', length " << m << ":   Character not found" << '\n';
  }

  // starting from a known substring within the string and of m length
  size_t sx = s.find("DE");
  if (sx != std::string::npos) {
    if (sx + m <= s.length())
      std::cout << "Start \"DE\", length " << m << ":  " << s.substr(sx, m)
                << '\n';
    else
      std::cout << "Start \"DE\", length " << m << ":   Index out of range."
                << '\n';
  } else {
    std::cout << "Start \"DE\", length " << m << ":  Substring not found"
              << '\n';
  }
}