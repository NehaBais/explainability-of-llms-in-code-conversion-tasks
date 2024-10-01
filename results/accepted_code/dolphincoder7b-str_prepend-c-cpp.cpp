#include <cstring>
#include <iostream>

int main() {
  std::string str = "my String";
  const char *cstr = "Changed ";
  char *dup;
  sprintf(str.c_str(), "%s%s", cstr, (dup = strdup(str.c_str())));
  free(dup);
  printf("%s\n", str.c_str());
  return 0;
}