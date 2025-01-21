#include <algorithm>
#include <cctype>

int main() {
  std::string B = "Hello, World!";
  std::transform(B.begin(), B.end(), B.begin(),
                 ::tolower); // 'B' string converted to lower case
}