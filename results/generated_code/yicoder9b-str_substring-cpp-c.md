Below is the equivalent C code for the given C++ code: 

```c
#include <stdio.h>
#include <string.h>

int main() {
  char s[] = "0123456789";

  int const n = 3;
  int const m = 4;
  char const c = '2';
  char const *sub = "456";

  printf("%.*s\n", m, s + n);
  printf("%s\n", s + n);
  printf("%.*s\n", (int)strlen(s)-1, s);

  char *p = strchr(s, c);
  if (p != NULL)
    printf("%.*s\n", m, p);

  char *q = strstr(s, sub);
  if (q != NULL)
    printf("%.*s\n", m, q);
}
```

Please note that the C standard library doesn't have built-in support for Unicode strings. Therefore, if you want to handle UTF-8 or UTF-16 properly, a more complex solution is needed. This can involve using additional libraries such as `ICU` (International Components for Unicode). 

Also note that the C language does not have a built-in equivalent of the std::string::find method in C++ - instead we use the standard library function strstr to find substrings and strchr to find characters, which return NULL if they don't find anything. We then check for this, and only try to print a substring if these functions returned non-NULL pointers.
