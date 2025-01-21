#include
int main() {
  std::string buffer;
  std::getline(std::cin, buffer);
  std::istringstream stream(buffer);
  int a, b;
  stream >> a >> b;
  if (a < b) {
    std::cout << a << " is less than " << b << std::endl;
  } else if (a == b) {
    std::cout << a << " equals " << b << std::endl;
  } else if (a > b) {
    std::cout << a << " is greater than " << b << std::endl;
  }
  return 0;
}