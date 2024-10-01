 The C code provided is already in C++. It doesn't require any conversion as it uses the same C standard library functions for strings as it would in a pure C program. Here is your given C code:

```cpp
#include <string.h>
#include <stdio.h>

int startsWith(const char* container, const char* target)
{
  size_t clen = strlen(container), tlen = strlen(target);
  if (clen < tlen)
    return 0;
  return strncmp(container, target, tlen) == 0;
}

int endsWith(const char* container, const char* target)
{
  size_t clen = strlen(container), tlen = strlen(target);
  if (clen < tlen)
    return 0;
  return strncmp(container + clen - tlen, target, tlen) == 0;
}

int doesContain(const char* container, const char* target)
{
  return strstr(container, target) != 0;
}

int main()
{
  printf("Starts with Test ( Hello,Hell ) : %d\n", startsWith("Hello","Hell"));
  printf("Ends with Test ( Code,ode ) : %d\n", endsWith("Code","ode"));
  printf("Contains Test ( Google,msn ) : %d\n", doesContain("Google","msn"));

  return 0;
}
```
