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
  return std::string(str.c_str() + index, m);
}

std::string substr(const std::string &str, const std::string &sub, size_t m) {
  size_t index = str.find(sub);
  if (index == std::string::npos || index + m > str.length()) {
    throw std::out_of_range("Index out of range");
  }
  return std::string(str.c_str() + index, m);
}

int main() {
  try {
    std::cout << substr(std::string("hello world"), 7, 5)
              << std::endl;                                          // "world"
    std::cout << substr(std::string("hello world"), 8) << std::endl; // ""
    std::cout << substr(std::string("hello world"), 'o')
              << std::endl; // "world"
    std::cout << substr(std::string("hello world"), "world")
              << std::endl; // "hello worl"
    std::cout << substr(std::string("hello world"), 'z', 5) << std::endl; // ""
  } catch (const std::exception &e) {
    std::cerr << e.what() << std::endl;
  }
  return 0;
}