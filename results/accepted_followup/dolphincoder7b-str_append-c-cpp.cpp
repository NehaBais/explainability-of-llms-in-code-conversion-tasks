#include <iostream>
using namespace std;

int main() {
  char str[24] = "Good Morning";
  string cstr = " to all";
  string cstr2 = " !!!";

  // failure when space allocated to str is insufficient.

  if (sizeof(str) > strlen(str) + cstr.size() + cstr2.size()) {
    /* 1st method  */
    std::strcat(str, cstr.c_str());

    /* 2nd method  */
    int x = strlen(str);
    sprintf(&str[x], "%s", cstr2.c_str());

    cout << str;
  }

  return 0;
}