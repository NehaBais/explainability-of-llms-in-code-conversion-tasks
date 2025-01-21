#include <iostream>

std::istream &operator>>(std::istream &is, int &n) {
  is >> std::ws;
  if (is.fail()) {
        throw std::runtime_error("Failed to read integer value"));
  }
    n = static_cast<int>(is.get()))();
    return is;
}