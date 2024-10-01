```cpp
#include <iostream>
#include <sys/stat.h>

int main()
{
  struct stat foo;
  stat("input.txt", &foo);
  std::cout << foo.st_size << std::endl;
  stat("/input.txt", &foo);
  std::cout << foo.st_size << std::endl;
  return 0;
}
```
