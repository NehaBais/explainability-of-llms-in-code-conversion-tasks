```cpp
#include <iostream>
#include <string>
#include <sstream>

int main() {
  std::ostringstream s;
  s << "foo" << "bar";
  std::cout << s.str() << std::endl;

  return 0;
}
```
