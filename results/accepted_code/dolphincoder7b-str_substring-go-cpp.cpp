#include <iostream>
#include <string>

int main() {
  std::string s = "ABCDEFGH";
  int n, m;

  // for reference
  std::cout << "Index:  01234567" << "\n";
  std::cout << "String: " << s << "\n";

  // starting from n characters in and of m length
  std::string start_m = s.substr(n, m);
  std::cout << "Start 2, length 3:    " << start_m << "\n";

  // starting from n characters in, up to the end of the string
  std::string start_to_end = s.substr(n);
  std::cout << "Start 2, to end:      " << start_to_end << "\n";

  // whole string minus last character
  std::string all_but_last = s.substr(0, s.length() - 1);
  std::cout << "All but last:         " << all_but_last << "\n";

  // starting from a known character within the string and of m length
  int dx = s.find('D');
  std::string start_dx_m = s.substr(dx, m);
  std::cout << "Start 'D', length 3:   " << start_dx_m << "\n";

  // starting from a known substring within the string and of m length
  int sx = s.find("DE");
  std::string start_sx_m = s.substr(sx, m);
  std::cout << "Start \"DE\", length 3: " << start_sx_m << "\n";

  return 0;
}