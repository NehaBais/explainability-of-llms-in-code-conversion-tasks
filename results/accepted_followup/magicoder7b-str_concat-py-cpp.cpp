#include <algorithm> // for std::accumulate()
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;

  std::vector<std::string> vec = {"world",
                                  "mom"}; // vector initialization fixed
  std::ostringstream os;
  for (const auto &str : vec) {
    os << "," << str;
  }

  std::cout << "\"" + os.str()[1:] + "\""; // Output: hello,world,mom

  std::string s3 = ", ";
  for (const auto &str : vec) {
    s3 += str;
  }
  std::cout << s3 << std::endl;

  return 0;
}