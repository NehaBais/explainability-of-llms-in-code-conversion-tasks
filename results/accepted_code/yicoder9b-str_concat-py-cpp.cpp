#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;

  s1 = "hello";
  std::vector<std::string> vec{s1, "world", "mom"};
  std::string s3 =
      *(vec.begin()) + ", " + *(vec.begin() + 1) + ", " + *(vec.begin() + 2);
  std::cout << s3 << std::endl;

  return 0;
}