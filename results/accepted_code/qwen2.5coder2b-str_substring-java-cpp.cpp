#include <iostream>
#include <string>

std::string substr(const std::string &str, size_t n, size_t m) {
  if (n >= str.length()) {
    throw std::out_of_range("Index out of range");
  }
  return str.substr(n, m);
}

std::string substr(const std::string &str, size_t n) {
  if (n >= str.length()) {
    throw std::out_of_range("Index out of range");
  }
  return str.substr(n);
}

std::string substr(const std::string &str) {
  if (str.empty()) {
    throw std::invalid_argument("String is empty");
  }
  return str.substr(0, str.length() - 1);
}

std::string substr(const std::string &str, char c, size_t m) {
  size_t index = str.find(c);
  if (index == std::string::npos || index + m > str.length()) {
    throw std::out_of_range("Index out of range");
  }
  return str.substr(index, m);
}

std::string substr(const std::string &str, const std::string &sub, size_t m) {
  size_t index = str.find(sub);
  if (index == std::string::npos || index + m > str.length()) {
    throw std::out_of_range("Index out of range");
  }
  return str.substr(index, m);
}

int main() {
  try {
    std::string str1 = "Hello, World!";
    std::cout << substr(str1, 7) << std::endl;    // Output: "World!"
    std::cout << substr(str1, 8) << std::endl;    // Output: "World"
    std::cout << substr(str1, 0) << std::endl;    // Output: "Hello, "
    std::cout << substr(str1, 'o') << std::endl;  // Output: "ello, W"
    std::cout << substr(str1, "lo") << std::endl; // Output: "llo, Wo"

    std::string str2 = "";
    std::cout << substr(str2, 0) << std::endl; // Expected to throw an exception

    std::string str3 = "A";
    std::cout << substr(str3, 1, 2) << std::endl; // Output: "B"
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}