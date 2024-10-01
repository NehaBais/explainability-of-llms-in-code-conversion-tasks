#include <algorithm> // for case-insensitive comparison
#include <iostream>
#include <string> // std::string

int main() {
  // only same types can be compared
  // String and String or &str and &str
  // exception: strict equality and inequality also work on &str and String
  const char *a = "abc"; // C-style string
  std::string b("Bac");  // UTF-8 encoded

  // Strings are coerced to &str when borrowed and needed
  if (a == b) {
    std::cout << "The strings are equal\n";
  } else if (a != b) {
    std::cout << "The strings are not equal\n";
  } else if (*a > *b) // lexicographic order comparison
    std::cout << "The first string is lexically after the second\n";
  else if (*a < *b)
    std::cout << "The first string is lexically before the second\n";

  // case-insensitives:
  // equality
  // this avoids new allocations
  if (std::equal(a.begin(), a.end(), b.begin(), b.end(),
                 [](char a, char b) { return tolower(a) == tolower(b); })) {
    std::cout << "Both strings are equal when ignoring case\n";
  }

  // everything else, create owned Strings, then compare as above
  std::string a2 = a; // copy string from C-style to UTF-8 encoded std::string
  std::transform(a2.begin(), a2.end(), a2.begin(),
                 ::toupper); // convert to upper case
  std::string b2 = b; // copy string from C-style to UTF-8 encoded std::string
  std::transform(b2.begin(), b2.end(), b2.begin(), ::toupper);

  if (a2 == b2) {
    std::cout << "Both strings are equal when ignoring case\n";
  } else if (a2 > b2) // lexicographic order comparison
    std::cout << "The first string is lexically after the second\n";
  else if (a2 < b2)
    std::cout << "The first string is lexically before the second\n";
}