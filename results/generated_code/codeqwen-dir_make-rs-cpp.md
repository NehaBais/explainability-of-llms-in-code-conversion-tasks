In C++, you can use the `<filesystem>` library to create directories. Here is the equivalent code:

```cpp
#include <iostream>
#include <filesystem>

int main() {
    std::filesystem::path dir_to_create("./path/to/dir");
    if (!std::filesystem::exists(dir_to_create)) {
        if (!std::filesystem::create_directories(dir_to_create)) {
            std::cerr << "An Error Occurred!";
            return 1;
        }
    }
    return 0;
}
```

This code first checks if the directory exists. If it doesn't, it creates the directory and its missing parents using `create_directories`. If the creation fails for any reason (for example, due to a lack of permissions), it outputs an error message to `cerr` and returns `1`. If everything works as expected, it returns `0`.
