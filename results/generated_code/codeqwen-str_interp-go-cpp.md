The equivalent C++ code for the given Golang code would look like:

```cpp
#include <iostream>
#include <string>

int main() {
    std::string str = "Mary had a %s lamb";
    std::string txt = "little";
    str.replace(str.find("%s"), 2, txt);
    std::cout << str << std::endl;
    return 0;
}
```

This code does the following:

1. It defines two strings `str` and `txt`.
2. The string `str` contains a placeholder for a value (`%s`) in it.
3. The function `replace()` is used to replace that placeholder with the contents of the `txt` variable.
4. Finally, the resultant string is printed out to the console using `std::cout`.

This will output: `Mary had a little lamb`, which is the result after replacing `%s` with `little`.
