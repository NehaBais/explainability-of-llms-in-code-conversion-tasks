#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::ostringstream s;
  s << "foo" << "bar";
  std::cout << s.str() << std::endl;

  return 0;
}