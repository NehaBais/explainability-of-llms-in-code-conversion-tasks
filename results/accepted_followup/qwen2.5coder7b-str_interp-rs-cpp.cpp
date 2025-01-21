#include <format> // Include <format> for std::format
#include <iostream>
#include <string>

int main() {
  std::string interpolated = std::format("Mary had a {} lamb", "little");
  std::cout << interpolated << std::endl;

  // Specifying order of arguments
  interpolated = std::format("{1} had a {0} lamb", "little", "Mary");
  std::cout << interpolated << std::endl;

  // Using named arguments (not directly supported, but can be simulated with
  // maps)
  std::string name = "Mary";
  std::string adj = "little";
  interpolated =
      std::format("{name} had a {adj} lamb", std::make_pair("name", name),
                  std::make_pair("adj", adj));
  std::cout << interpolated << std::endl;

  return 0;
}