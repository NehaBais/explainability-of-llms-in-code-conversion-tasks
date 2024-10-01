#include
#include
int main() {
  std::string s = "abc文字化けdef";
  int n = 2;
  int m = 3;
  // Print 3 characters starting at index 2 (c文字)
  std::cout << std::string(s.begin() + n, s.begin() + n + m) << std::endl;
  // Print all characters starting at index 2 (c textoizecedef)
  std::cout << std::string(s.begin() + n, s.end()) << std::endl;
  // Print all characters except the last (abc textoizecede)
  std::cout << std::string(s.rbegin() + 1, s.rend()) << std::endl;
  // Print 3 characters starting with 'b' (bc文)
  int cpos = s.find('b');
  if (cpos != std::string::npos) {
    std::cout << std::string(s.begin() + cpos, s.begin() + cpos + m)
              << std::endl;
  }
  // Print 3 characters starting with "けd" (kende)
  int spos = s.find(" Ken");
  if (spos != std::string::npos) {
    std::cout << std::string(s.begin() + spos, s.begin() + spos + m)
              << std::endl;
  }
  return 0;
}