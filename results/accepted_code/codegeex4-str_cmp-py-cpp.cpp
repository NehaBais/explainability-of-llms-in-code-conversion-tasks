#include <algorithm>
#include <iostream>
#include <string>

void compare(const std::string &a, const std::string &b) {
  std::cout << "\"" << a << "\" is of type " << typeid(a).name() << " and \""
            << b << "\" is of type " << typeid(b).name() << "\n";
  if (a < b)
    std::cout << '"' << a << "\" is strictly less than  \"" << b << "\"\n";
  if (a <= b)
    std::cout << '"' << a << "\" is less than or equal to \"" << b << "\"\n";
  if (a > b)
    std::cout << '"' << a << "\" is strictly greater than  \"" << b << "\"\n";
  if (a >= b)
    std::cout << '"' << a << "\" is greater than or equal to \"" << b << "\"\n";
  if (a == b)
    std::cout << '"' << a << "\" is equal to \"" << b << "\"\n";
  if (a != b)
    std::cout << '"' << a << "\" is not equal to \"" << b << "\"\n";
}

void compare(const char *a, const char *b) {
  std::cout << "\"" << a << "\" is of type " << typeid(a).name() << " and \""
            << b << "\" is of type " << typeid(b).name() << "\n";
  if (strcmp(a, b) < 0)
    std::cout << '"' << a << "\" is strictly less than  \"" << b << "\"\n";
  if (strcmp(a, b) <= 0)
    std::cout << '"' << a << "\" is less than or equal to \"" << b << "\"\n";
  if (strcmp(a, b) > 0)
    std::cout << '"' << a << "\" is strictly greater than  \"" << b << "\"\n";
  if (strcmp(a, b) >= 0)
    std::cout << '"' << a << "\" is greater than or equal to \"" << b << "\"\n";
  if (!strcmp(a, b))
    std::cout << '"' << a << "\" is equal to \"" << b << "\"\n";
}

void compare_insensitive(const std::string &a, const std::string &b) {
  std::string lower_a = a;
  std::string lower_b = b;

  std::transform(lower_a.begin(), lower_a.end(), lower_a.begin(), ::tolower);
  std::transform(lower_b.begin(), lower_b.end(), lower_b.begin(), ::tolower);

  std::cout << "\"" << a << "\" is of type " << typeid(a).name() << " and \""
            << b << "\" is of type " << typeid(b).name() << "\n";
  if (lower_a < lower_b)
    std::cout << '"' << a << "\" is strictly less than  \"" << b << "\"\n";
  if (lower_a <= lower_b)
    std::cout << '"' << a << "\" is less than or equal to \"" << b << "\"\n";
  if (lower_a > lower_b)
    std::cout << '"' << a << "\" is strictly greater than  \"" << b << "\"\n";
  if (lower_a >= lower_b)
    std::cout << '"' << a << "\" is greater than or equal to \"" << b << "\"\n";
  if (lower_a == lower_b)
    std::cout << '"' << a << "\" is equal to \"" << b << "\"\n";
}

int main() {
  compare("YUP", "YUP");
  compare("BALL", "BELL");
  compare("24", "123");

  // Compare as strings
  compare(5.0, 5);

  // Case insensitive comparison
  compare_insensitive("Apple", "orange");

  return 0;
}