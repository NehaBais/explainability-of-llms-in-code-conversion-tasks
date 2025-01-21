#include
#include
int main() {
  std::string a("ABC");
  std::string b("Bac");
  if (std::strcmp(a.c_str(), b.c_str()) == 0) {
    printf("The strings are equaln");
  } else if (std::strcmp(a.c_str(), b.c_str()) > 0) {
    printf("The first string is greatern");
  } else if (std::strcmp(a.c_str(), b.c_str()) < 0) {
    printf("The second string is greatern");
  } else {
    printf("The strings are not equaln");
  }
  return 0;
}