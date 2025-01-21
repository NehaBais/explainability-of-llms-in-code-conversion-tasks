```cpp
#include <iostream>
#include <cstring>

bool startsWith(const char* container, const char* target)
{
    size_t clen = strlen(container), tlen = strlen(target);
    if (clen < tlen)
        return false;
    for(size_t i=0;i<tlen;++i)
        if(container[i] != target[i])
            return false;
    return true;
}

bool endsWith(const char* container, const char* target)
{
    size_t clen = strlen(container), tlen = strlen(target);
    if (clen < tlen)
        return false;
    for(size_t i=0;i<tlen;++i)
        if(container[clen-tlen+i] != target[i])
            return false;
    return true;
}

bool doesContain(const char* container, const char* target)
{
    return strstr(container, target) != nullptr;
}

int main(void)
{
  std::cout << "Starts with Test ( Hello,Hell ) : " << startsWith("Hello","Hell") << std::endl;
  std::cout << "Ends with Test ( Code,ode ) : " << endsWith("Code","ode") << std::endl;
  std::cout << "Contains Test ( Google,msn ) : " << doesContain("Google","msn") << std::endl;

  return 0;
}
```
