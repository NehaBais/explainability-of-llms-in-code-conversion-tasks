#include
#include
int main() {
  // only same types can be compared
  // String and String or &str and &str
  // exception: strict equality and inequality also work on &str and String
  const char *a = "abc";
  std::string b("Bac");

  // Strings are coerced to &str when borrowed and needed
  if (std::strcmp(a, b.c_str()) == 0) {
    printf("The strings are equaln");
  }
  if (std::strcmp(a, b.c_str()) != 0) {
    printf("The strings are not equaln");
  }
  if (std::strcmp(a, b.c_str()) > 0) {
    printf("The first string is lexically after the secondn");
  }
  if (std::strcmp(a, b.c_str()) < 0) {
    printf("The first string is lexically before the secondn");
  }
  if (std::strcmp(a, b.c_str()) >= 0) {
    printf("The first string is not lexically before the secondn");
  }
  if (std::strcmp(a, b.c_str()) <= 0) {
    printf("The first string is not lexically after the secondn");
  }

  // case-insensitives:

  // equality
  // this avoids new allocations
  if (std::equalsIgnoreCase(a, b.c_str())) {
    printf("Both strings are equal when ignoring casen");
  }

  // everything else, create owned Strings, then compare as above
  std::string a2 = a;
  std::transform(a2.begin(), a2.end(), a2.begin(), ::toupper);
  std::string b2 = b;
  std::transform(b2.begin(), b2.end(), b2.begin(), ::toupper);

  // repeat checks
  return 0;
}