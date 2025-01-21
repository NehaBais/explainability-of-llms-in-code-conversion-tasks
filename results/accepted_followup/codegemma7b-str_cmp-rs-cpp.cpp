#include <algorithm>
#include <iostream>
#include <locale>
#include <string>

int main() {
  // ...

  // Case-insensitive comparison
  std::string a_upper = a;
  std::string b_upper = b;

  std::transform(a_upper.begin(), a_upper.end(), a_upper.begin(),
                 [](char c) { return std::toupper(c, std::locale()); });
  std::transform(b_upper.begin(), b_upper.end(), b_upper.begin(),
                 [](char c) { return std::toupper(c, std::locale()); });

  // ...
}