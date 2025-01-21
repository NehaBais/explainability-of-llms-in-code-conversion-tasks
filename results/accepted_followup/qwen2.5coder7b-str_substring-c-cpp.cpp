#include <iostream>
#include <string>

// Function prototypes
std::string substring(const std::string &s, size_t pos, ssize_t len);
std::string str_wholeless1(const std::string &s);
std::string str_fromch(const std::string &s, char ch, ssize_t len);
std::string str_fromstr(const std::string &s, const std::string &in, ssize_t n);

// Example usage
void test(const std::function<std::string()> &func) {
  auto r = func();
  std::cout << r << std::endl;
}

int main() {
  std::string s = "world program";
  test([s]() { return substring(s, 12, 5); });   // get "short"
  test([s]() { return substring(s, 6, -1); });   // get "world shortest program"
  test([s]() { return str_wholeless1(s); });     // "... progra"
  test([s]() { return str_fromch(s, 'w', 5); }); // "world"
  test([s]() { return str_fromstr(s, "ro", 3); }); // "rog"

  return 0;
}