The given code is already written in C++ and it works for UTF-8 or UTF-16 too as it uses the C++ standard library's string class which supports Unicode. However, if you want to convert this code into a pure C language code, here is the conversion:

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char const sub[] = "456";

  printf("%s\n", strlen(s) > n ? &s[n] : "");
  printf("%s\n", s);
  printf("%s\n", *s != '\0' ? s : "");
  printf("%.*s\n", m, (char *)strchr(s, c));
  printf("%.*s\n", m, (char *)strstr(s, sub));

  return 0;
}
```

Please note:
- In C, the `std::string` equivalent is `char[]`, which stores the string as an array of characters.
- The `std::cout` and `<< "
"` are replaced by `printf()` and "\n".
- For `s.substr(0, s.size()-1)`, we use `*s != '\0' ? s : ""` to check if string is not empty or null.
- There isn't direct equivalent of `std::string::find` in C, so using `strchr()` and `strstr()` respectively. 
- Also, note that the length used with `printf("%.*s\n", m, ...)` is limited to the size of characters we want to print, which is `m`.
