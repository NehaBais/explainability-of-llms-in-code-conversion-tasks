#include
#include
int main() {
  std::string s1 = "hello";
  std::cout << s1 + " world" << std::endl;
  std::string s2 = s1 + " world";
  std::cout << s2 << std::endl;
  s1 = "hello";
  std::vector strs = {"world", "mom"};
  std::string s3 = ", ".join(strs);
  std::cout << ", ".join({s1, s3}) << std::endl;
  std::string s4 = ", ".join({s1, s3});
  std::cout << s4 << std::endl;
  return 0;
}