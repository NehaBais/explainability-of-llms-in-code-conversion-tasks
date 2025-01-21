The error occurs because `strcat_s` is not part of standard C or C++, but rather a proprietary Microsoft extension. We can correct this by using the standard library function `std::strcat`. Here's the corrected code:

```cpp
#include  <iostream>
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
```

The error was caused by the use of a Microsoft-specific function (`strcat_s`). To fix this, we should use the standard library `std::strcat` instead. The corrected code now uses this function to concatenate the strings in C++.
