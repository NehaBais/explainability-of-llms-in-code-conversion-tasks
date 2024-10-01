#include <cstdlib> // for std::strdup in case of not using string copy method
#include <iostream>
#include <string>
using namespace std;

int main() {
  string str = "my String";
  const char *cstr = "Changed "; // C++ strings are immutable, so we have to use
                                 // a char* for prepending.
  char *dup = nullptr;

#if __cplusplus >=                                                             \
    201103L // If the compiler supports C++11 and onwards (like g++)
  str = string(cstr) +
        str; // Use string concatenation feature in C++, no need to use sprintf.
#else        // If it's not a C++11 compiler or later version
  dup = std::strdup(
      (cstr + str)); // C++ does not have an equivalent method for sprintf() so
                     // we need to copy the strings manually.
  free(dup);
  str = cstr + str; // Concatenate the two strings and assign it back to str.
#endif
  cout << str << endl; // print the final string using C++ style console output.

  return 0;
}