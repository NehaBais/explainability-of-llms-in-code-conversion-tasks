#include
#include
int main() {
  std::string str = "Good Morning";
  const char *cstr = " to all";
  const char *cstr2 = " !!!";

  // Failure when space allocated to str is insufficient.
  if (str.size() + strlen(cstr) + strlen(cstr2) < str.capacity()) {
    // 1st method
    str += cstr;

    // 2nd method
    str += cstr2;

    std::cout << str << std::endl;
  }

  return 0;
}