#include <iostream>
#include <sstream>
#include <string>

std::string interpolateString(const std::string &str, const std::string &txt) {
  std::string out = str; // Copy the original string to output
  size_t pos = 0;
  while ((pos = out.find('%', pos)) !=
         std::string::npos) { // While there are '%' symbols in the string
    if (pos + 1 < out.size() &&
        out[pos + 1] ==
            's') { // If next symbol is an 's' (for string interpolation)
      out = out.substr(0, pos) + txt +
            out.substr(pos + 2); // Replace '%s' with given text
    }
    ++pos; // Move position forward by 1 to avoid same sequence being replaced
           // again in loop
  }
  return out;
}

int main() {
  std::string str = "Mary had a %s lamb";
  std::string txt = "little";
  std::cout << interpolateString(str, txt)
            << std::endl; // Output: Mary had a little lamb
}