#include <iostream>
#include <locale>
#include <string>

int main() {
  std::wstring c(L"cat");
  std::wstring d(L"dog");
  if (c == d) {
    std::wcout << c << " is byte-wise identical to " << d << std::endl;
  }
  if (c != d) {
    std::wcout << c << " is byte-wise different from " << d << std::endl;
  }
  if (c < d) {
    std::wcout << c << " is lexically byte-wise less than " << d << std::endl;
  }
  // Go's strong type system does not allow direct comparison of strings and
  // numeric types.

  // A case insensitive compare can be done by using locale setting to make
  // the comparison case insensitive.
  std::wstring eqf(L"when interpreted as UTF-8 and compared under Unicode, "
                   L"simple case folding rules.");
  if (c == d || c <= d || c >= d) { // Using '||' operator for logical OR.
    std::wcout << c << " is equal to or less than or greater than " << d
               << " as per locale settings " << std::endl;
  } else {
    std::wcout << c << " and " << d << " are not equal to each other"
               << std::endl;
  }

  // This is not in Go's standard library but is in the Go "sub repository" at
  // golang.org/x/text.  There is support for Unicode normalization, collation
  // tables, and locale sensitive comparisons.
}