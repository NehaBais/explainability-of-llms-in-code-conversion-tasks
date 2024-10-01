#include <cctype> // for std::toupper, std::tolower
#include <iostream>
using namespace std;

int main() {
  string a("abc");  // String
  string b = "Bac"; // String
  if (a == b)
    printf("The strings are equal\n");
  else if (a < b)
    printf("The first string is lexically after the second\n");
  else if (b < a)
    printf("The first string is lexically before the second\n");

  // Case-insensitive comparison
  string a_upper = a; // To ensure no memory leak, create a copy of 'a'
  for (auto &c : a_upper) {
    c = toupper(c);
  }
  if (a_upper == b)
    printf("Both strings are equal when ignoring case\n");
  else if (b < a_upper)
    printf(
        "The first string is lexically after the second when ignoring case\n");
  else if (a_upper < b)
    printf(
        "The first string is lexically before the second when ignoring case\n");
}