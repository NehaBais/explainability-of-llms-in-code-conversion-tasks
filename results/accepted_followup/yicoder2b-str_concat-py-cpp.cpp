#include <iostream>
#include <string>
int main() {
  std::string s1 = "hello";
  s1 += " world";
  std::cout << s1 << std::endl; // Output: hello world

  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl; // Output: hello world world

  const char *sep[] = {", ", nullptr};
  std::string s3 = join(sep, {s1, "world", "mom"});
  std::cout << s3 << std::endl; // Output: hello, world, mom

  char sep2[] = {',', ' '};
  std::string s4 = join(&sep2, {s1, "world", "mom"});
  std::cout << s4 << std::endl; // Output: hello world mom
}