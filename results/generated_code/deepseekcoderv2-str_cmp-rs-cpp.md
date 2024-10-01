
## Code:

```cpp
#include <cstring>
#include <iostream>
// #include <string_view> // c++20, not available in VS 17

bool compare(const char *a, const char *b) {
    return std::strcmp(a, b) == 0;
}
bool necompare(const char *a, const char *b) {
    return !std::strcmp(a, b);
}
bool lessthan(const char *a, const char *b) {
    return std::strcmp(a, b) < 0;
}
bool greaterthan(const char *a, const char *b) {
    return std::strcmp(a, b) > 0;
}

bool compare_ascii(const char *a, const char *b) {
    // this function returns false if case doesn't match but the same content is present in both cases.
    int i = 0;
    while (1) {
        if ((i >= std::strlen(a)) || (i >= std::strlen(b))) return true;
        const auto a_ch = static_cast<unsigned char>(a[i]);
        const auto b_ch = static_cast<unsigned char>(b[i]);
        // ASCII is an 8-bit character set, i.e., the unsigned char type can hold any value between 0 and 255 (inclusive)
        if ((a_ch >= 'A') && (a_ch <= 'Z')) { // convert to lowercase: this means only ascii case is considered for comparison; otherwise no conversion takes place
            a[i] = static_cast<char>(std::tolower(static_cast<unsigned char>(a[i])));
        }
        if ((b_ch >= 'A') && (b_ch <= 'Z')) {
            b[i] = static_cast<char>(std::tolower(static_cast<unsigned char>(b[i])));
        }
        i++;
    }
}

int main() {
  // only same types can be compared
  const char* a = "abc";
  std::string b = "Bac";

  if (compare(a, b.c_str())) { std::cout << "The strings are equal" << std::endl; }
  if (necompare(a, b.c_str())) { std::cout << "The strings are not equal" << std::endl; }
  if (lessthan(a, b.c_str())) { std::cout << "The first string is lexically after the second" << std::endl; }
  if (greaterthan(a, b.c_str())) { std::cout << "The first string is lexically before the second" << std::endl; }

  // case-insensitives:
  char a2[4] = {'A', 'b', 'C'};
  char b2[3]; strcpy(b2, b.c_str());
  
  if (compare_ascii(a2, b2)) { std::cout << "Both strings are equal when ignoring case" << std::endl; }
}
```

## Output:

![output](images/strings.png)
