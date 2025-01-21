#include <iostream>
#include <string>

int main() {
  std::string original = "Mary had a X lamb";
  std::string little = "little";
  std::string replaced =
      original.replace("X", little); // does not change the original string
}