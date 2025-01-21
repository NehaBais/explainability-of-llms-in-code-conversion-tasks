#include <cstring> // For strcpy and strlen
#include <iostream>
#include <string>

int main() {
  std::string str = "my String";
  const char *cstr = "Changed ";
  char buffer[100];

  // Prepend the string literal to the std::string
  std::strcpy(buffer, cstr);
  std::strcat(buffer, str.c_str());

  std::cout << buffer << std::endl;
  return 0;
}