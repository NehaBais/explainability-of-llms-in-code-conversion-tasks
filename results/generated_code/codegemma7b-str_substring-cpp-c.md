```c
#include <stdio.h>
#include <string.h>

int main()
{
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char const sub[] = "456";

  printf("%.*s\n", m, s + n);
  printf("%.*s\n", strlen(s) - n, s + n);
  printf("%.*s\n", strlen(s) - 1, s);
  printf("%.*s\n", m, s + sscanf(s, "%*[^%c]%c", NULL, c));
  printf("%.*s\n", m, s + strstr(s, sub) - s);
}
```

**Explanation:**

- `printf` function is used to display substrings.
- `%*s` format specifier specifies the length of the substring to be displayed.
- `s + n` expression points to the character at position n in the string.
- `strlen(s) - n` calculates the length of the substring starting from n.
- `strlen(s) - 1` calculates the length of the whole string minus the last character.
- `sscanf` function is used to find the position of the character c in the string.
- `strstr` function is used to find the position of the substring sub in the string.

**Note:**

- This code assumes that the string is in ASCII.
- The UTF-8 and UTF-16 code conversions are not included in this solution.
