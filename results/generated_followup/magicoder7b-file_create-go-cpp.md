 The error is occurring because we are trying to concatenate an `std::string` with a `const char *`, which is not allowed. 

We can fix this by converting our string into a const char * before passing it to the system function, like so:

```cpp
#include <cstdlib> // for system function
#include <fstream>
#include <iostream>
#include <sstream>

void createFile(const std::string &fn) {
    std::ofstream f(fn);
    if (!f.is_open()) {
        std::cerr << "Failed to open file: " << fn << '\n';
        return;
    }
    std::cout << "File '" << fn << "' created!" << std::endl;
}

void createDir(const std::string &dn) {
    std::ostringstream cmd;
    cmd << "mkdir -p " << dn;
    int r = std::system(cmd.str().c_str());
    if (r != 0) {
        std::cerr << "Failed to create directory: " << dn << '\n';
        return;
    }
    std::cout << "Directory '" << dn << "' created!" << std::endl;
}

int main() {
    createFile("input.txt");
    createDir("docs");
    createDir("/docs");
    return 0;
}
```

In this corrected version, we first concatenate our directory name to the command stringstream, then convert that stream's content to a const char * and pass it to the system function. This way, we can create directories in C++ just as easily as we do in Go.
